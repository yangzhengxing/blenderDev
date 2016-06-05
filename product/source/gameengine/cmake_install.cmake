# Install script for directory: D:/blenderDev/blender/source/gameengine

# Set the install prefix
IF(NOT DEFINED CMAKE_INSTALL_PREFIX)
  SET(CMAKE_INSTALL_PREFIX "D:/blenderDev/product/bin/${BUILD_TYPE}")
ENDIF(NOT DEFINED CMAKE_INSTALL_PREFIX)
STRING(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
IF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  IF(BUILD_TYPE)
    STRING(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  ELSE(BUILD_TYPE)
    SET(CMAKE_INSTALL_CONFIG_NAME "Release")
  ENDIF(BUILD_TYPE)
  MESSAGE(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
ENDIF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)

# Set the component getting installed.
IF(NOT CMAKE_INSTALL_COMPONENT)
  IF(COMPONENT)
    MESSAGE(STATUS "Install component: \"${COMPONENT}\"")
    SET(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  ELSE(COMPONENT)
    SET(CMAKE_INSTALL_COMPONENT)
  ENDIF(COMPONENT)
ENDIF(NOT CMAKE_INSTALL_COMPONENT)

IF(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  INCLUDE("D:/blenderDev/product/source/gameengine/BlenderRoutines/cmake_install.cmake")
  INCLUDE("D:/blenderDev/product/source/gameengine/Converter/cmake_install.cmake")
  INCLUDE("D:/blenderDev/product/source/gameengine/Expressions/cmake_install.cmake")
  INCLUDE("D:/blenderDev/product/source/gameengine/GameLogic/cmake_install.cmake")
  INCLUDE("D:/blenderDev/product/source/gameengine/Ketsji/cmake_install.cmake")
  INCLUDE("D:/blenderDev/product/source/gameengine/Ketsji/KXNetwork/cmake_install.cmake")
  INCLUDE("D:/blenderDev/product/source/gameengine/Network/cmake_install.cmake")
  INCLUDE("D:/blenderDev/product/source/gameengine/Network/LoopBackNetwork/cmake_install.cmake")
  INCLUDE("D:/blenderDev/product/source/gameengine/Physics/Dummy/cmake_install.cmake")
  INCLUDE("D:/blenderDev/product/source/gameengine/Rasterizer/cmake_install.cmake")
  INCLUDE("D:/blenderDev/product/source/gameengine/Rasterizer/RAS_OpenGLRasterizer/cmake_install.cmake")
  INCLUDE("D:/blenderDev/product/source/gameengine/SceneGraph/cmake_install.cmake")
  INCLUDE("D:/blenderDev/product/source/gameengine/Physics/Bullet/cmake_install.cmake")
  INCLUDE("D:/blenderDev/product/source/gameengine/VideoTexture/cmake_install.cmake")

ENDIF(NOT CMAKE_INSTALL_LOCAL_ONLY)

