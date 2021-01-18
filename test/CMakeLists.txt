set(TEST_NAME rul_test)
include(FetchContent)
set(SOURCE_FILES main.cpp unit_test.cpp tutorial.cpp)

# uncomment these lines to enable coverage measurements using gcov
#set(CMAKE_C_FLAGS "--coverage")
#set(CMAKE_CXX_FLAGS "--coverage")

FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG        release-1.10.0)
FetchContent_MakeAvailable(googletest)

FetchContent_Declare(
        ApprovalTests
        GIT_REPOSITORY https://github.com/approvals/ApprovalTests.cpp
        GIT_TAG        v.10.5.1)
FetchContent_MakeAvailable(ApprovalTests)

add_executable(${TEST_NAME})
target_sources(${TEST_NAME} PRIVATE ${SOURCE_FILES})
target_link_libraries(${TEST_NAME} src gtest ApprovalTests::ApprovalTests)
set_property(TARGET ${TEST_NAME} PROPERTY CXX_STANDARD 11)
add_test(NAME ${TEST_NAME} COMMAND ${TEST_NAME})
