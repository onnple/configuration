aux_source_directory(src ASOURCES)

add_subdirectory(B)
add_subdirectory(C)

add_library(A STATIC ${ASOURCES})
target_include_directories(A PUBLIC src B/src C/src)
target_link_libraries(A PUBLIC B C)