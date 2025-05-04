add_library(ansi base.cc custom.cc format.cc other_styles.cc)

target_include_directories(ansi PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
${CMAKE_CURRENT_SOURCE_DIR}/../include)