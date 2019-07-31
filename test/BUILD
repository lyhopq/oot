cc_test(
  name = "oot-test",
  srcs = glob(["**/*.cc", "**/*.cpp", "**/*.h", "**/*.hpp"]),
  copts = ["-Itools/cut/include", 
    "-std=c++11", 
    "-g", 
    "-Wno-invalid-offsetof"],  
  deps = ["//test/3thrd/cut:cut_main", "//:oot"],
)
