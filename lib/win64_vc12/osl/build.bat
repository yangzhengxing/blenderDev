@Echo off
setlocal

set LIBDIR=%CD%\..
set LIBNAME=osl
set OSL_VERSION=1.7.1

set "OSL_SOURCE=https://github.com/imageworks/OpenShadingLanguage/archive/Release-%OSL_VERSION%.zip"

:: create build directory
echo Libdir set to: %LIBDIR%

set BUILD_TYPE=Release

call :CheckOS

call :CheckPath

call :CheckBuildSystem

call :CheckTargetArch

:: if not exist OpenShadingLanguage-Release-%OIIO_VERSION% (
::    echo getting source
::    call :PrepareSource
::)

echo Calling Build
IF [%1]==[DEBUG] (
call :Build_debug
) ELSE (
call :Build
)

exit /b


:Build
cd OpenShadingLanguage-Release-%OSL_VERSION%
:: create build directory
:: rmdir /s build
mkdir build\windows
cd build\windows

cmake -G "Visual Studio 12 2013 Win64" ..\..\ ^
 -DCMAKE_INSTALL_PREFIX=%LIBDIR%\osl ^
 -DCMAKE_CXX_FLAGS_DEBUG="/D_DEBUG /MTd /Zi /Ob0 /Od /RTC1 /DOIIO_STATIC_BUILD /DTINYFORMAT_ALLOW_WCHAR_STRINGS " ^
 -DCMAKE_CXX_FLAGS_MINSIZEREL="/MT /O1 /Ob1 /D NDEBUG /DOIIO_STATIC_BUILD /DTINYFORMAT_ALLOW_WCHAR_STRINGS " ^
 -DCMAKE_CXX_FLAGS_RELEASE="/MT /O2 /Ob2 /D NDEBUG /DOIIO_STATIC_BUILD /DTINYFORMAT_ALLOW_WCHAR_STRINGS " ^
 -DCMAKE_CXX_FLAGS_RELWITHDEBINFO="/MT /Zi /O2 /Ob1 /D NDEBUG /DOIIO_STATIC_BUILD /DTINYFORMAT_ALLOW_WCHAR_STRINGS " ^
 -DCMAKE_CXX_STANDARD_LIBRARIES:STRING="kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib psapi.lib" ^
 -DBUILDSTATIC=ON ^
 -DOPENIMAGEIOHOME=%LIBDIR%\OpenImageIO ^
 -DOPENIMAGEIO_LIBRARY=%LIBDIR%\openimageio\lib\OpenImageIO_Util.lib;%LIBDIR%\openimageio\lib\OpenImageIO.lib;%LIBDIR%\png\lib\libpng.lib;%LIBDIR%\jpeg\lib\libjpeg.lib;%LIBDIR%\tiff\lib\libtiff.lib;%LIBDIR%\openexr\lib\Half.lib;%LIBDIR%\openexr\lib\Imath-2_2.lib;%LIBDIR%\openexr\lib\IlmImf-2_2.lib;%LIBDIR%\openexr\lib\Iex-2_2.lib;%LIBDIR%\openexr\lib\IlmThread-2_2.lib ^
 -DBOOST_ROOT=%LIBDIR%\boost ^
 -DBoost_COMPILER:STRING="-vc120" ^
 -DBoost_USE_MULTITHREADED=ON ^
 -DBoost_USE_STATIC_LIBS=ON ^
 -DBoost_USE_STATIC_RUNTIME=ON ^
 -DBOOST_LIBRARYDIR=%LIBDIR%\boost\lib ^
 -DZLIB_INCLUDE_DIR=%LIBDIR%\zlib\include ^
 -DZLIB_LIBRARY=%LIBDIR%\zlib\lib\libz_st.lib ^
 -DFLEX_EXECUTABLE=%LIBDIR%\osl\flex_bison\bin\win_flex.exe ^
 -DBISON_EXECUTABLE=%LIBDIR%\osl\flex_bison\bin\win_bison.exe ^
 -DILMBASE_CUSTOM="ON" ^
 -DILMBASE_CUSTOM_LIBRARIES="Imath-2_2 Half IlmThread-2_2 Iex-2_2" ^
 -DILMBASE_CUSTOM_INCLUDE_DIR=%LIBDIR%\openexr\include ^
 -DILMBASE_CUSTOM_LIB_DIR=%LIBDIR%\openexr\lib ^
 -DLLVM_DIRECTORY=%LIBDIR%\llvm ^
 -DLLVM_INCLUDES=%LIBDIR%\llvm\include ^
 -DLLVM_LIB_DIR=%LIBDIR%\llvm\lib ^
 -DLLVM_VERSION=3.4 ^
 -DLLVM_LIBRARY=%LIBDIR%\llvm\lib\LLVMAnalysis.lib;%LIBDIR%\llvm\lib\LLVMAsmParser.lib;%LIBDIR%\llvm\lib\LLVMAsmPrinter.lib;%LIBDIR%\llvm\lib\LLVMBitReader.lib;%LIBDIR%\llvm\lib\LLVMBitWriter.lib;%LIBDIR%\llvm\lib\LLVMCodeGen.lib;%LIBDIR%\llvm\lib\LLVMCore.lib;%LIBDIR%\llvm\lib\LLVMDebugInfo.lib;%LIBDIR%\llvm\lib\LLVMExecutionEngine.lib;%LIBDIR%\llvm\lib\LLVMInstCombine.lib;%LIBDIR%\llvm\lib\LLVMInstrumentation.lib;%LIBDIR%\llvm\lib\LLVMInterpreter.lib;%LIBDIR%\llvm\lib\LLVMJIT.lib;%LIBDIR%\llvm\lib\LLVMLinker.lib;%LIBDIR%\llvm\lib\LLVMMC.lib;%LIBDIR%\llvm\lib\LLVMMCDisassembler.lib;%LIBDIR%\llvm\lib\LLVMMCJIT.lib;%LIBDIR%\llvm\lib\LLVMMCParser.lib;%LIBDIR%\llvm\lib\LLVMObject.lib;%LIBDIR%\llvm\lib\LLVMRuntimeDyld.lib;%LIBDIR%\llvm\lib\LLVMScalarOpts.lib;%LIBDIR%\llvm\lib\LLVMSelectionDAG.lib;%LIBDIR%\llvm\lib\LLVMSupport.lib;%LIBDIR%\llvm\lib\LLVMTableGen.lib;%LIBDIR%\llvm\lib\LLVMTarget.lib;%LIBDIR%\llvm\lib\LLVMTransformUtils.lib;%LIBDIR%\llvm\lib\LLVMVectorize.lib;%LIBDIR%\llvm\lib\LLVMX86AsmParser.lib;%LIBDIR%\llvm\lib\LLVMX86AsmPrinter.lib;%LIBDIR%\llvm\lib\LLVMX86CodeGen.lib;%LIBDIR%\llvm\lib\LLVMX86Desc.lib;%LIBDIR%\llvm\lib\LLVMX86Disassembler.lib;%LIBDIR%\llvm\lib\LLVMX86Info.lib;%LIBDIR%\llvm\lib\LLVMX86Utils.lib;%LIBDIR%\llvm\lib\LLVMipa.lib;%LIBDIR%\llvm\lib\LLVMipo.lib ^
 -DILMBASE_HOME=%LIBDIR%\openexr ^
 -DILMBASE_VERSION=2_2 ^
 -USE_SIMD="sse2" ^ 
 -OSL_BUILD_TESTS=OFF ^
 -DCMAKE_BUILD_TYPE=Release

msbuild /p:Configuration=Debug /t:Build  /p:Platform="x64" INSTALL.vcxproj

goto:eof



:Build_debug
cd OpenShadingLanguage-Release-%OSL_VERSION%
:: create build directory
:: rmdir /s build
mkdir build\windows_debug
cd build\windows_debug

cmake -G "Visual Studio 12 2013 Win64" ..\..\ ^
 -DCMAKE_INSTALL_PREFIX=%LIBDIR%\osl\debug ^
 -DCMAKE_CXX_FLAGS_DEBUG="/D_DEBUG /MTd /Zi /Ob0 /Od /RTC1 /DOIIO_STATIC_BUILD /DTINYFORMAT_ALLOW_WCHAR_STRINGS " ^
 -DCMAKE_CXX_FLAGS_MINSIZEREL="/MT /O1 /Ob1 /D NDEBUG /DOIIO_STATIC_BUILD /DTINYFORMAT_ALLOW_WCHAR_STRINGS " ^
 -DCMAKE_CXX_FLAGS_RELEASE="/MT /O2 /Ob2 /D NDEBUG /DOIIO_STATIC_BUILD /DTINYFORMAT_ALLOW_WCHAR_STRINGS " ^
 -DCMAKE_CXX_FLAGS_RELWITHDEBINFO="/MT /Zi /O2 /Ob1 /D NDEBUG /DOIIO_STATIC_BUILD /DTINYFORMAT_ALLOW_WCHAR_STRINGS " ^
 -DCMAKE_CXX_STANDARD_LIBRARIES:STRING="kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib psapi.lib" ^
 -DBUILDSTATIC=ON ^
 -DOPENIMAGEIOHOME=%LIBDIR%\OpenImageIO ^
 -DOPENIMAGEIO_LIBRARY=%LIBDIR%\openimageio\lib\OpenImageIO_d.lib;%LIBDIR%\openimageio\lib\OpenImageIO_Util_d.lib;%LIBDIR%\png\lib\libpng.lib;%LIBDIR%\jpeg\lib\libjpeg.lib;%LIBDIR%\tiff\lib\libtiff.lib;%LIBDIR%\openexr\lib\Half_d.lib;%LIBDIR%\openexr\lib\Imath-2_2_d.lib;%LIBDIR%\openexr\lib\IlmImf-2_2_d.lib;%LIBDIR%\openexr\lib\Iex-2_2_d.lib;%LIBDIR%\openexr\lib\IlmThread-2_2_d.lib ^
 -DBOOST_ROOT=%LIBDIR%\boost ^
 -DBoost_USE_STATIC_LIBS=ON ^
 -DBoost_USE_STATIC_RUNTIME=ON ^
 -DILMBASE_CUSTOM="ON" ^
 -DILMBASE_CUSTOM_LIBRARIES="Imath-2_2_d Half_d IlmThread-2_2_d Iex-2_2_d" ^
 -DILMBASE_CUSTOM_INCLUDE_DIR=%LIBDIR%\openexr\include ^
 -DILMBASE_CUSTOM_LIB_DIR=%LIBDIR%\openexr\lib ^
 -DZLIB_INCLUDE_DIR=%LIBDIR%\zlib\include ^
 -DZLIB_LIBRARY=%LIBDIR%\zlib\lib\libz_st.lib ^
 -DFLEX_EXECUTABLE=%LIBDIR%\osl\flex_bison\bin\win_flex.exe ^
 -DBISON_EXECUTABLE=%LIBDIR%\osl\flex_bison\bin\win_bison.exe ^
 -DLLVM_DIRECTORY=%LIBDIR%\llvm ^
 -DLLVM_INCLUDES=%LIBDIR%\llvm\include ^
 -DLLVM_LIB_DIR=%LIBDIR%\llvm\debug\lib ^
 -DLLVM_VERSION=3.4 ^
 -DCMAKE_DEBUG_POSTFIX:STRING="_d" ^
 -DLLVM_LIBRARY=%LIBDIR%\llvm\debug\lib\LLVMAnalysis.lib;%LIBDIR%\llvm\debug\lib\LLVMAsmParser.lib;%LIBDIR%\llvm\debug\lib\LLVMAsmPrinter.lib;%LIBDIR%\llvm\debug\lib\LLVMBitReader.lib;%LIBDIR%\llvm\debug\lib\LLVMBitWriter.lib;%LIBDIR%\llvm\debug\lib\LLVMCodeGen.lib;%LIBDIR%\llvm\debug\lib\LLVMCore.lib;%LIBDIR%\llvm\debug\lib\LLVMDebugInfo.lib;%LIBDIR%\llvm\debug\lib\LLVMExecutionEngine.lib;%LIBDIR%\llvm\debug\lib\LLVMInstCombine.lib;%LIBDIR%\llvm\debug\lib\LLVMInstrumentation.lib;%LIBDIR%\llvm\debug\lib\LLVMInterpreter.lib;%LIBDIR%\llvm\debug\lib\LLVMJIT.lib;%LIBDIR%\llvm\debug\lib\LLVMLinker.lib;%LIBDIR%\llvm\debug\lib\LLVMMC.lib;%LIBDIR%\llvm\debug\lib\LLVMMCDisassembler.lib;%LIBDIR%\llvm\debug\lib\LLVMMCJIT.lib;%LIBDIR%\llvm\debug\lib\LLVMMCParser.lib;%LIBDIR%\llvm\debug\lib\LLVMObject.lib;%LIBDIR%\llvm\debug\lib\LLVMRuntimeDyld.lib;%LIBDIR%\llvm\debug\lib\LLVMScalarOpts.lib;%LIBDIR%\llvm\debug\lib\LLVMSelectionDAG.lib;%LIBDIR%\llvm\debug\lib\LLVMSupport.lib;%LIBDIR%\llvm\debug\lib\LLVMTableGen.lib;%LIBDIR%\llvm\debug\lib\LLVMTarget.lib;%LIBDIR%\llvm\debug\lib\LLVMTransformUtils.lib;%LIBDIR%\llvm\debug\lib\LLVMVectorize.lib;%LIBDIR%\llvm\debug\lib\LLVMX86AsmParser.lib;%LIBDIR%\llvm\debug\lib\LLVMX86AsmPrinter.lib;%LIBDIR%\llvm\debug\lib\LLVMX86CodeGen.lib;%LIBDIR%\llvm\debug\lib\LLVMX86Desc.lib;%LIBDIR%\llvm\debug\lib\LLVMX86Disassembler.lib;%LIBDIR%\llvm\debug\lib\LLVMX86Info.lib;%LIBDIR%\llvm\debug\lib\LLVMX86Utils.lib;%LIBDIR%\llvm\debug\lib\LLVMipa.lib;%LIBDIR%\llvm\debug\lib\LLVMipo.lib ^
 -DILMBASE_HOME=%LIBDIR%\openexr ^
 -DILMBASE_VERSION=2_2 ^
 -USE_SIMD="sse2" ^
 -OSL_BUILD_TESTS=OFF ^
 -DCMAKE_BUILD_TYPE=Debug

msbuild /p:Configuration=Debug /t:Build  /p:Platform="x64" INSTALL.vcxproj

goto:eof



:CheckTargetArch
cl 2>&1 | findstr /c:x64 >nul 2>&1
if errorlevel 1 (
    set targetarch=Win32
    echo target win32
) else (
    set targetarch=x64
    echo target x64
)

goto:eof
 
 
:PrepareSource

if not exist OpenShadingLanguage-Release-%OSL_VERSION%.zip (
    echo Downloading OSL %OSL_VERSION%
    curl -L "%OSL_SOURCE%" -o OpenShadingLanguage-Release-%OSL_VERSION%.zip
)

if not exist OpenShadingLanguage-Release-%OSL_VERSION% (
    echo Extraction source to OSL-%OSL_VERSION%
    unzip OpenShadingLanguage-Release-%OSL_VERSION%.zip
	cd OpenShadingLanguage-Release-%OSL_VERSION%
	patch -p1 < ..\osl_fixes_msvc2013.diff
	cd ..
)
goto:eof

:CheckOS
IF EXIST "%PROGRAMFILES(X86)%" (set bit=x64) ELSE (set bit=x86)
goto:eof

:CheckPath
echo Checking for git in the path
diff >nul 2>&1
if errorlevel 9009 (
    echo diff is not in the current path, it needs to be 
    if %bit%==x64 ( set "PATH=%PATH%;%PROGRAMFILES(X86)%\Git\bin"
    ) else ( set "PATH=%PATH%;%PROGRAMFILES%\Git\bin" )
  
    diff >nul 2>&1
    if errorlevel 9009 (
    echo please install msys git
    exit /b
    )
) 
echo We got git/diff/patch etc
goto:eof

:CheckBuildSystem
msbuild >nul 2>&1
if errorlevel 9009 (
    echo "we need msbuild"
    exit /b
) 
goto:eof

