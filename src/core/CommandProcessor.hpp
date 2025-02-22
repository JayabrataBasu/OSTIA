// src/core/CommandProcessor.hpp
#ifndef OSTIA_COMMAND_PROCESSOR_HPP
#define OSTIA_COMMAND_PROCESSOR_HPP

#include <string>

namespace OSTIA {

class CommandProcessor {
public:
  struct CommandResult {
    std::string command;
    std::string arguments;
  };

  CommandResult parse(const std::string &input);
};

} // namespace OSTIA

#endif // OSTIA_COMMAND_PROCESSOR_HPP
