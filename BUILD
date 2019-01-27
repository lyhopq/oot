cc_library(
  name = "oot",
  srcs = glob(
      ["src/**/*.cc", "src/**/*.cpp"],
      # exclude = [""]    
  ),
  hdrs = glob(["include/**/*.h", "include/**/*.hpp"]),
  copts = ["-std=c++11", "--coverage"],
  includes = ["include"],
  visibility = ["//visibility:public"],
  deps = ["//libs/cut:cut"],
)