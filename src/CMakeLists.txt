# file(GLOB_RECURSE main_src
#   "main.cpp"
# )

FILE(GLOB_RECURSE oot_srcs
*.cpp
*.cc
*.c++
*.c
*.C)
# list(REMOVE_ITEM oot_srcs ${main_src})

add_library(oot STATIC ${oot_srcs})

# add_library(cut-main STATIC ${main_src})