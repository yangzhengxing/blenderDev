This is OpenSubdiv hash cf7135e from official repository

See https://github.com/PixarAnimationStudios/OpenSubdiv/tree/dev

Here's the CMake configuration:

cmake -G "Visual Studio 12 Win64" ^
    -D GLEW_INCLUDE_DIR=C:\b\lib-extern\glew\include\ ^
    -D GLEW_LIBRARY=C:\b\lib-extern\glew\lib\glew32s.lib ^
    -D GLFW_INCLUDE_DIR=C:\b\lib-extern\glfw\include\ ^
    -D GLFW_LIBRARIES=C:\b\lib-extern\glfw\lib\glfw3.lib ^
    -D CLEW_INCLUDE_DIR=C:\b\clew\include\ ^
    -D CLEW_LIBRARY=C:\b\clew\lib\clew.lib ^
    -D CUEW_INCLUDE_DIR=C:\b\\cuew\include\ ^
    -D CUEW_LIBRARY=C:\b\cuew\lib\cuew.lib ^
    -D CMAKE_INSTALL_PREFIX=c:\b\opensubdiv-dev ^
    -D CMAKE_C_FLAGS_DEBUG="/D_DEBUG /MTd /Zi /Ob0 /Od /RTC1" ^
    -D CMAKE_C_FLAGS_RELEASE="/MT /O2 /Ob2 /D NDEBUG" ^
    -D CMAKE_CXX_FLAGS_DEBUG="/D_DEBUG /MTd /Zi /Ob0 /Od /RTC1" ^
    -D CMAKE_CXX_FLAGS_RELEASE="/MT /O2 /Ob2 /D NDEBUG" ^
    -D NO_EXAMPLES=ON ^
    -D NO_REGRESSION=ON ^
    -D NO_PYTHON=ON ^
    -D NO_MAYA=ON ^
    -D NO_PTEX=ON ^
    -D NO_DOC=ON ^
    -D NO_CUDA=ON ^
    -D NO_OPENCL=ON ^
    -D NO_TUTORIALS=ON ^
    -D CMAKE_EXE_LINKER_FLAGS_RELEASE="libcmt.lib" ^
    ..

Needs this libs for compilation as well:
- https://github.com/CudaWrangler/cuew
- https://github.com/OpenCLWrangler/clew
