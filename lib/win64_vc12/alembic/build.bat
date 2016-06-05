@Echo off
setlocal

set LIBDIR=%CD%\..
set LIBNAME=alembic

echo Libdir set to: %LIBDIR%


call :Build


:Build
mkdir alembic\build\windows
cd alembic\build\windows

cmake -G "NMake Makefiles" ../.. ^
 -DCMAKE_INSTALL_PREFIX=%LIBDIR%\alembic ^
 -DCMAKE_CXX_FLAGS_DEBUG="/D_DEBUG /D PLATFORM_WINDOWS /MTd /Zi /Ob0 /Od /RTC1" ^
 -DCMAKE_CXX_FLAGS_MINSIZEREL="/MT /O1 /Ob1 /D NDEBUG  /D PLATFORM_WINDOWS" ^
 -DCMAKE_CXX_FLAGS_RELEASE="/MT /O2 /Ob2 /D NDEBUG /D PLATFORM_WINDOWS" ^
 -DCMAKE_CXX_FLAGS_RELWITHDEBINFO="/MT /Zi /O2 /Ob1 /D NDEBUG /D PLATFORM_WINDOWS" ^
 -DCMAKE_CXX_STANDARD_LIBRARIES:STRING="kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib psapi.lib" ^
 -DZLIB_LIBRARY=%LIBDIR%\zlib\lib\libz_st.lib ^
 -DZLIB_INCLUDE_DIR=%LIBDIR%\zlib\include ^
 -DBUILDSTATIC=ON ^
 -DLINKSTATIC=ON ^
 -DBoost_COMPILER:STRING="-vc120" ^
 -DBoost_USE_MULTITHREADED=ON ^
 -DBoost_USE_STATIC_LIBS=ON ^
 -DBoost_USE_STATIC_RUNTIME=ON ^
 -DBOOST_ROOT=%LIBDIR%\boost ^
 -DILMBASE_ROOT=%LIBDIR%\openexr ^
 -DALEMBIC_ILMBASE_INCLUDE_DIRECTORY=%LIBDIR%\openexr\include\OpenEXR ^
 -DALEMBIC_ILMBASE_HALF_LIB=%LIBDIR%\openexr\lib\Half.lib ^
 -DALEMBIC_ILMBASE_IMATH_LIB=%LIBDIR%\openexr\lib\Imath-2_2.lib ^
 -DALEMBIC_ILMBASE_ILMTHREAD_LIB=%LIBDIR%\openexr\lib\IlmThread-2_2.lib ^
 -DALEMBIC_ILMBASE_IEX_LIB=%LIBDIR%\openexr\lib\Iex-2_2.lib ^
 -DUSE_PYILMBASE=0 ^
 -DUSE_HDF5=0 ^
 -DUSE_ARNOLD=0 ^
 -DBUILD_EXAMPLES=0 ^
 -DALEMBIC_NO_OPENGL=1 ^
 -DBUILD_SHARED_LIBS=OFF ^
 -DGLUT_INCLUDE_DIR="" ^
 -DCMAKE_BUILD_TYPE=Release
 
nmake
 
goto:eof