aux_source_directory(src BSOURCES)
add_library(C STATIC ${BSOURCES})
target_include_directories(C PUBLIC src)