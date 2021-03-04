cmake_minimum_required(VERSION 3.20)
project(project)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(A)
aux_source_directory(src SOURCES)
add_executable(project ${SOURCES})
target_include_directories(project PUBLIC include A/src)
target_link_directories(project PUBLIC lib)
target_link_libraries(project PUBLIC A jsonxx)