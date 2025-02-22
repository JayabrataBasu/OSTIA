find_package(doctest CONFIG REQUIRED)

add_executable(OSTIA_tests
    test_main.cpp
    test_command_processor.cpp
    ../src/core/CommandProcessor.cpp
)

target_link_libraries(OSTIA_tests PRIVATE doctest::doctest)
target_include_directories(OSTIA_tests PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/../src
    "C:/Users/jayab/dev-tools/vcpkg/installed/x64-windows/include"
)

add_test(NAME OSTIA_unit_tests COMMAND OSTIA_tests)
