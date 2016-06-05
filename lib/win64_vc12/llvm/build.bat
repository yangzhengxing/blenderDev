:: @Echo off

setlocal

set LIBDIR=%CD%\..

set LLVM_VERSION=3.4.2
set LLVM_SOURCE=http://llvm.org/releases/%LLVM_VERSION%/llvm-%LLVM_VERSION%.src.tar.gz
set CLANG_SOURCE=http://llvm.org/releases/%LLVM_VERSION%/cfe-%LLVM_VERSION%.src.tar.gz



call :PrepareSource

:: call :Build
call :Build_debug

cd %LIBDIR%\llvm

exit /b

:Build

cd llvm-%LLVM_VERSION%.src
:: create build directory
mkdir build\windows
cd build\windows

cmake -G "Visual Studio 12 2013 Win64" ..\.. ^
 -DCMAKE_INSTALL_PREFIX=%LIBDIR%\llvm ^
 -DCMAKE_BUILD_TYPE=Release ^
 -DLLVM_USE_CRT_RELEASE=MT ^
 -DLLVM_INCLUDE_TESTS=OFF ^
 -DLLVM_TARGETS_TO_BUILD="X86" ^
 -DLLVM_INCLUDE_EXAMPLES=OFF

msbuild /p:Configuration=Release /t:Rebuild  /p:Platform="x64" llvm.sln
msbuild /p:Configuration=Release /t:Build  /p:Platform="x64" INSTALL.vcxproj
goto:eof


:Build_debug
cd llvm-%LLVM_VERSION%.src

:: create build directory
mkdir build\windows_debug
cd build\windows_debug

cmake -G "Visual Studio 12 2013 Win64" ..\.. ^
 -DCMAKE_INSTALL_PREFIX=%LIBDIR%\llvm\debug ^
 -DCMAKE_BUILD_TYPE=Debug ^
 -DLLVM_USE_CRT_DEBUG=MTd ^
 -DLLVM_INCLUDE_TESTS=OFF ^
 -DLLVM_TARGETS_TO_BUILD="X86" ^
 -DLLVM_INCLUDE_EXAMPLES=OFF

msbuild /p:Configuration=Debug /t:Rebuild  /p:Platform="x64" llvm.sln
msbuild /p:Configuration=Debug /t:Build  /p:Platform="x64" INSTALL.vcxproj
goto:eof


:PrepareSource

if not exist llvm-%LLVM_VERSION%.src.tar.gz (
    echo Downloading llvm %LLVM_VERSION%
    curl -L "%LLVM_SOURCE%" -o llvm-%LLVM_VERSION%.src.tar.gz
)

if not exist cfe-%LLVM_VERSION%.src.tar.gz (
    echo Downloading clang %LLVM_VERSION%
    curl -L "%CLANG_SOURCE%" -o cfe-%LLVM_VERSION%.src.tar.gz
)

if not exist llvm-%LLVM_VERSION%.src (


    echo Extraction source to llvm %LLVM_VERSION%
    tar xf llvm-%LLVM_VERSION%.src.tar.gz
	
	echo Extraction source to clang %LLVM_VERSION%
    tar xf cfe-%LLVM_VERSION%.src.tar.gz
	)
	
	:: Probably not as you should do it but this works
	move cfe-%LLVM_VERSION%.src llvm-%LLVM_VERSION%.src\tools\clang
)



goto:eof