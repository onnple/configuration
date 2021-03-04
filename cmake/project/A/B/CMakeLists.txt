aux_source_directory(src BSOURCES)
add_library(B STATIC ${BSOURCES})
target_include_directories(B PUBLIC src)