project ("test-app")
add_executable ("test-app")

target_include_directories("test-app" PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")
target_link_libraries("test-app" PRIVATE "blib-es")

file(GLOB_RECURSE APP_SOURCES CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/src/**.cpp")
target_sources("test-app" PRIVATE "${APP_SOURCES}")
