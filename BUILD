cc_library(
  name = "oot",
  srcs = glob(
      ["src/**/*.cc", "src/**/*.cpp"],
      # exclude = [""]    
  ),
  hdrs = glob(["include/**/*.h", "include/**/*.hpp"]),
  # copts = ["-std=c++11", "--coverage"],
  copts = ["-std=c++11"],
  includes = ["include"],
  visibility = ["//visibility:public"],
  deps = ["//test/3thrd/cut:cut"],
)