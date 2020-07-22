# CMake generated Testfile for 
# Source directory: E:/personal/tomatodb/third_party/jetserverfoundation
# Build directory: E:/personal/tomatodb/third_party/jetserverfoundation/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
if("${CTEST_CONFIGURATION_TYPE}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
  add_test(jsf_test "E:/personal/tomatodb/third_party/jetserverfoundation/build/Debug/jsf_test.exe")
  set_tests_properties(jsf_test PROPERTIES  _BACKTRACE_TRIPLES "E:/personal/tomatodb/third_party/jetserverfoundation/CMakeLists.txt;209;add_test;E:/personal/tomatodb/third_party/jetserverfoundation/CMakeLists.txt;214;jsflib_test;E:/personal/tomatodb/third_party/jetserverfoundation/CMakeLists.txt;0;")
elseif("${CTEST_CONFIGURATION_TYPE}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
  add_test(jsf_test "E:/personal/tomatodb/third_party/jetserverfoundation/build/Release/jsf_test.exe")
  set_tests_properties(jsf_test PROPERTIES  _BACKTRACE_TRIPLES "E:/personal/tomatodb/third_party/jetserverfoundation/CMakeLists.txt;209;add_test;E:/personal/tomatodb/third_party/jetserverfoundation/CMakeLists.txt;214;jsflib_test;E:/personal/tomatodb/third_party/jetserverfoundation/CMakeLists.txt;0;")
elseif("${CTEST_CONFIGURATION_TYPE}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
  add_test(jsf_test "E:/personal/tomatodb/third_party/jetserverfoundation/build/MinSizeRel/jsf_test.exe")
  set_tests_properties(jsf_test PROPERTIES  _BACKTRACE_TRIPLES "E:/personal/tomatodb/third_party/jetserverfoundation/CMakeLists.txt;209;add_test;E:/personal/tomatodb/third_party/jetserverfoundation/CMakeLists.txt;214;jsflib_test;E:/personal/tomatodb/third_party/jetserverfoundation/CMakeLists.txt;0;")
elseif("${CTEST_CONFIGURATION_TYPE}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
  add_test(jsf_test "E:/personal/tomatodb/third_party/jetserverfoundation/build/RelWithDebInfo/jsf_test.exe")
  set_tests_properties(jsf_test PROPERTIES  _BACKTRACE_TRIPLES "E:/personal/tomatodb/third_party/jetserverfoundation/CMakeLists.txt;209;add_test;E:/personal/tomatodb/third_party/jetserverfoundation/CMakeLists.txt;214;jsflib_test;E:/personal/tomatodb/third_party/jetserverfoundation/CMakeLists.txt;0;")
else()
  add_test(jsf_test NOT_AVAILABLE)
endif()
subdirs("googletest")
