# Install script for directory: D:/blenderDev/blender/intern

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
  INCLUDE("D:/blenderDev/product/intern/string/cmake_install.cmake")
  INCLUDE("D:/blenderDev/product/intern/ghost/cmake_install.cmake")
  INCLUDE("D:/blenderDev/product/intern/guardedalloc/cmake_install.cmake")
  INCLUDE("D:/blenderDev/product/intern/libmv/cmake_install.cmake")
  INCLUDE("D:/blenderDev/product/intern/memutil/cmake_install.cmake")
  INCLUDE("D:/blenderDev/product/intern/opencolorio/cmake_install.cmake")
  INCLUDE("D:/blenderDev/product/intern/mikktspace/cmake_install.cmake")
  INCLUDE("D:/blenderDev/product/intern/glew-mx/cmake_install.cmake")
  INCLUDE("D:/blenderDev/product/intern/eigen/cmake_install.cmake")
  INCLUDE("D:/blenderDev/product/intern/audaspace/cmake_install.cmake")
  INCLUDE("D:/blenderDev/product/intern/dualcon/cmake_install.cmake")
  INCLUDE("D:/blenderDev/product/intern/elbeem/cmake_install.cmake")
  INCLUDE("D:/blenderDev/product/intern/smoke/cmake_install.cmake")
  INCLUDE("D:/blenderDev/product/intern/iksolver/cmake_install.cmake")
  INCLUDE("D:/blenderDev/product/intern/itasc/cmake_install.cmake")
  INCLUDE("D:/blenderDev/product/intern/moto/cmake_install.cmake")
  INCLUDE("D:/blenderDev/product/intern/cycles/cmake_install.cmake")
  INCLUDE("D:/blenderDev/product/intern/locale/cmake_install.cmake")
  INCLUDE("D:/blenderDev/product/intern/rigidbody/cmake_install.cmake")
  INCLUDE("D:/blenderDev/product/intern/utfconv/cmake_install.cmake")

ENDIF(NOT CMAKE_INSTALL_LOCAL_ONLY)

