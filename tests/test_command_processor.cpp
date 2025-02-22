// tests/test_command_processor.cpp
#include "../src/core/CommandProcessor.hpp"
#include "C:/Users/jayab/dev-tools/vcpkg/installed/x64-windows/include/doctest/doctest.h"

TEST_CASE("Command Processing") {
  OSTIA::CommandProcessor processor;

  SUBCASE("Basic command parsing") {
    auto result = processor.parse("help");
    CHECK(result.command == "help");
    CHECK(result.arguments.empty());
  }

  SUBCASE("Command with arguments") {
    auto result = processor.parse("add_task Study for exam");
    CHECK(result.command == "add_task");
    CHECK(result.arguments == " Study for exam");
  }

  SUBCASE("Empty input") {
    auto result = processor.parse("");
    CHECK(result.command.empty());
    CHECK(result.arguments.empty());
  }
}
