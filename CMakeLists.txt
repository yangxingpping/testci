cmake_minimum_required (VERSION 3.6)

if(DEFINED ENV{VCPKG_ROOT} )
  set(CMAKE_TOOLCHAIN_FILE "$ENV{VCPKG_ROOT}/scripts/buildsystems/vcpkg.cmake"
      CACHE STRING "")
endif()

project (ft VERSION 1.1.1)

find_package(Catch2 REQUIRED)


AUX_SOURCE_DIRECTORY(. A)

enable_testing()
add_executable(logger main.cpp)

add_test(test1 logger)

target_link_libraries(logger PRIVATE Catch2::Catch2)
target_include_directories(logger PRIVATE Catch2::Catch2)

set_target_properties(logger PROPERTIES VS_DEBUGGER_WORKING_DIRECTORY "${CMAKE_SOURCE_DIR}")

