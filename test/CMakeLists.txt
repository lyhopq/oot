project(oot-test)

include_directories(3thrd/cut/include quantity/include)

FILE(GLOB_RECURSE all_files
*.cpp
*.cc
*.c++
*.c
*.C)

add_subdirectory(3thrd/cut/src)

add_executable(oot-test ${all_files})
target_link_libraries(oot-test cut-main cut oot)
