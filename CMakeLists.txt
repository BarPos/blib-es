cmake_minimum_required (VERSION 3.8)

set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreadedDebug$<$<CONFIG:Debug>:Debug>")
set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Release>:Release>")

project ("blib-es")

set (CXX_STANDARD 20)

# Include sub-projects.
add_subdirectory ("blib-es")
add_subdirectory ("test-app")