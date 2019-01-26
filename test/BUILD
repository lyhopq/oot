cc_test(
  name = "oot-test",
  srcs = glob(["**/*.cc", "**/*.cpp", "**/*.h", "**/*.hpp"]),
  copts = ["-Itools/cut/include", 
    "-std=c++14", 
    "-g", 
    "-Wno-invalid-offsetof"],  
  deps = ["//libs/cut:cut_main", "//:oot"],
)
