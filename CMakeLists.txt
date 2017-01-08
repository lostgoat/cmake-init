cmake_minimum_required(VERSION 2.8.11)
project(MyProject)

# Version number
set (MY_PROJECT_VERSION_MAJOR 0)
set (MY_PROJECT_VERSION_MINOR 1)
set (MY_PROJECT_VERSION_PATCH 0)

set (AUTOGEN_HEADERS_DIR "${PROJECT_BINARY_DIR}/autogen/include")

# Include <myproject/config.h>
configure_file (
  "${PROJECT_SOURCE_DIR}/config.h.in"
  "${AUTOGEN_HEADERS_DIR}/myproject/config.h"
  )

include_directories("${AUTOGEN_HEADERS_DIR}")
include_directories(include)

add_subdirectory(src)

set (CPPCHECK_EXTENSIONS cpp h)
set (CPPCHECK_DIR src/)
include(cmake/cppcheck.cmake)
