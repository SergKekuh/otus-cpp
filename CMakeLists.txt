cmake_minimum_required(VERSION 3.10)

set(PATCH_VERSION "1" CACHE INTERNAL "Patch version")
set(PROJECT_VESRION 0.0.${PATCH_VERSION})

project(helloworld VERSION ${PROJECT_VESRION})

#get googletest
include(FetchContent)
FetchContent_Declare(googletest
  GIT_REPOSITORY https://github.com/google/googletest
  GIT_TAG release-1.11.0
)
FetchContent_GetProperties(googletest)

# googletest_POPULATED
# googletest_SOURCE_DIR
# googletest_BUILD_DIR

if(NOT googletest_POPULATED)
  FetchContent_Populate(googletest)
  add_subdirectory(${googletest_SOURCE_DIR} ${googletest_BUILD_DIR})
endif()

configure_file(version.h.in version.h)
add_library(hellow_Lib STATIC lib.cpp)

add_executable(hellow_App main.cpp)
target_link_libraries(hellow_App 
    hellow_Lib
)

add_executable(test_version test_version.cpp)
target_link_libraries(test_version 
    hellow_Lib
    gtest_main
    gmock_main
)