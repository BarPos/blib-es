add_library ("blib-es")


target_include_directories("blib-es" PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")
target_link_directories("blib-es" PUBLIC)
target_link_libraries("blib-es" PUBLIC)

file(GLOB_RECURSE BLIB_ES_SOURCES CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/src/**.cpp")
target_sources("blib-es" PRIVATE "${BLIB_ES_SOURCES}")