file(GLOB_RECURSE main_src
  "main.cpp"
)

FILE(GLOB_RECURSE cut_srcs
*.cpp
*.cc
*.c++
*.c
*.C)
list(REMOVE_ITEM cut_srcs ${main_src})

include_directories("../include")

add_library(cut STATIC ${cut_srcs})

add_library(cut-main STATIC ${main_src})