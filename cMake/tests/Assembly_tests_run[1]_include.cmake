if(EXISTS "/home/jarvis/Documents/freecad-source/cMake/tests/Assembly_tests_run")
  if(NOT EXISTS "/home/jarvis/Documents/freecad-source/cMake/tests/Assembly_tests_run[1]_tests.cmake" OR
     NOT "/home/jarvis/Documents/freecad-source/cMake/tests/Assembly_tests_run[1]_tests.cmake" IS_NEWER_THAN "/home/jarvis/Documents/freecad-source/cMake/tests/Assembly_tests_run" OR
     NOT "/home/jarvis/Documents/freecad-source/cMake/tests/Assembly_tests_run[1]_tests.cmake" IS_NEWER_THAN "${CMAKE_CURRENT_LIST_FILE}")
    include("/usr/share/cmake-3.28/Modules/GoogleTestAddTests.cmake")
    gtest_discover_tests_impl(
      TEST_EXECUTABLE [==[/home/jarvis/Documents/freecad-source/cMake/tests/Assembly_tests_run]==]
      TEST_EXECUTOR [==[]==]
      TEST_WORKING_DIR [==[/home/jarvis/Documents/freecad-source/cMake/tests]==]
      TEST_EXTRA_ARGS [==[]==]
      TEST_PROPERTIES [==[]==]
      TEST_PREFIX [==[]==]
      TEST_SUFFIX [==[]==]
      TEST_FILTER [==[]==]
      NO_PRETTY_TYPES [==[FALSE]==]
      NO_PRETTY_VALUES [==[FALSE]==]
      TEST_LIST [==[Assembly_tests_run_TESTS]==]
      CTEST_FILE [==[/home/jarvis/Documents/freecad-source/cMake/tests/Assembly_tests_run[1]_tests.cmake]==]
      TEST_DISCOVERY_TIMEOUT [==[5]==]
      TEST_XML_OUTPUT_DIR [==[]==]
    )
  endif()
  include("/home/jarvis/Documents/freecad-source/cMake/tests/Assembly_tests_run[1]_tests.cmake")
else()
  add_test(Assembly_tests_run_NOT_BUILT Assembly_tests_run_NOT_BUILT)
endif()
