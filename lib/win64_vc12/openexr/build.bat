@Echo off

cd ilmbase-2.2.0

set LIBDIR=%CD%\..\..

mkdir build\windows-dbg
cd build\windows-dbg

cmake -G "NMake Makefiles" ..\.. ^
 -DCMAKE_INSTALL_PREFIX=%LIBDIR%\openexr ^
 -DCMAKE_CXX_FLAGS_DEBUG="/D_DEBUG /D PLATFORM_WINDOWS /MTd /Zi /Ob0 /Od /RTC1" ^
 -DCMAKE_CXX_FLAGS_MINSIZEREL="/MT /O1 /Ob1 /D NDEBUG  /D PLATFORM_WINDOWS" ^
 -DCMAKE_CXX_FLAGS_RELEASE="/MT /O2 /Ob2 /D NDEBUG /D PLATFORM_WINDOWS" ^
 -DCMAKE_CXX_FLAGS_RELWITHDEBINFO="/MT /Zi /O2 /Ob1 /D NDEBUG /D PLATFORM_WINDOWS" ^
 -DCMAKE_CXX_STANDARD_LIBRARIES:STRING="kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib psapi.lib" ^
 -DBUILD_SHARED_LIBS=OFF ^
 -DCMAKE_DEBUG_POSTFIX:STRING="_d" ^
 -DCMAKE_BUILD_TYPE=Debug

nmake
nmake install

cd ..\..

mkdir build\windows
cd build\windows

cmake -G "NMake Makefiles" ..\.. ^
 -DCMAKE_INSTALL_PREFIX=%LIBDIR%\openexr ^
 -DCMAKE_CXX_FLAGS_DEBUG="/D_DEBUG /D PLATFORM_WINDOWS /MTd /Zi /Ob0 /Od /RTC1" ^
 -DCMAKE_CXX_FLAGS_MINSIZEREL="/MT /O1 /Ob1 /D NDEBUG  /D PLATFORM_WINDOWS" ^
 -DCMAKE_CXX_FLAGS_RELEASE="/MT /O2 /Ob2 /D NDEBUG /D PLATFORM_WINDOWS" ^
 -DCMAKE_CXX_FLAGS_RELWITHDEBINFO="/MT /Zi /O2 /Ob1 /D NDEBUG /D PLATFORM_WINDOWS" ^
 -DCMAKE_CXX_STANDARD_LIBRARIES:STRING="kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib psapi.lib" ^
 -DBUILD_SHARED_LIBS=OFF ^
 -DCMAKE_BUILD_TYPE=Release

nmake
nmake install


cd ..\..\..\

cd openexr-2.2.0

set LIBDIR=%CD%\..\..

mkdir build\windows-dbg
cd build\windows-dbg

cmake -G "NMake Makefiles" ..\.. ^
 -DCMAKE_INSTALL_PREFIX=%LIBDIR%\openexr ^
 -DCMAKE_CXX_FLAGS_DEBUG="/D_DEBUG /D PLATFORM_WINDOWS /MTd /Zi /Ob0 /Od /RTC1" ^
 -DCMAKE_CXX_FLAGS_MINSIZEREL="/MT /O1 /Ob1 /D NDEBUG  /D PLATFORM_WINDOWS" ^
 -DCMAKE_CXX_FLAGS_RELEASE="/MT /O2 /Ob2 /D NDEBUG /D PLATFORM_WINDOWS" ^
 -DCMAKE_CXX_FLAGS_RELWITHDEBINFO="/MT /Zi /O2 /Ob1 /D NDEBUG /D PLATFORM_WINDOWS" ^
 -DCMAKE_CXX_STANDARD_LIBRARIES:STRING="kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib psapi.lib" ^
 -DILMBASE_PACKAGE_PREFIX=%LIBDIR%\openexr ^
 -DZLIB_LIBRARY=%LIBDIR%/zlib/lib/libz_st_d.lib ^
 -DZLIB_INCLUDE_DIR=%LIBDIR%/zlib/include ^
 -DBUILD_SHARED_LIBS=OFF ^
 -DCMAKE_DEBUG_POSTFIX:STRING="_d" ^
 -DCMAKE_BUILD_TYPE=Debug

nmake
nmake install

cd ..\..

mkdir build\windows
cd build\windows

cmake -G "NMake Makefiles" ..\.. ^
 -DCMAKE_INSTALL_PREFIX=%LIBDIR%\openexr ^
 -DCMAKE_CXX_FLAGS_DEBUG="/D_DEBUG /D PLATFORM_WINDOWS /MTd /Zi /Ob0 /Od /RTC1" ^
 -DCMAKE_CXX_FLAGS_MINSIZEREL="/MT /O1 /Ob1 /D NDEBUG  /D PLATFORM_WINDOWS" ^
 -DCMAKE_CXX_FLAGS_RELEASE="/MT /O2 /Ob2 /D NDEBUG /D PLATFORM_WINDOWS" ^
 -DCMAKE_CXX_FLAGS_RELWITHDEBINFO="/MT /Zi /O2 /Ob1 /D NDEBUG /D PLATFORM_WINDOWS" ^
 -DCMAKE_CXX_STANDARD_LIBRARIES:STRING="kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib psapi.lib" ^
 -DILMBASE_PACKAGE_PREFIX=%LIBDIR%\openexr ^
 -DZLIB_LIBRARY=%LIBDIR%/zlib/lib/libz_st.lib ^
 -DZLIB_INCLUDE_DIR=%LIBDIR%/zlib/include ^
 -DBUILD_SHARED_LIBS=OFF ^
 -DCMAKE_BUILD_TYPE=Release

nmake
nmake install

cd ..\..\..
