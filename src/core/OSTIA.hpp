// src/core/OSTIA.hpp
#pragma once
#include <string>
#include <unordered_map>
#include <vector>

class OSTIA {
public:
  OSTIA();
  std::string processCommand(const std::string &command);

private:
  std::unordered_map<std::string, std::string> systemState;
  std::vector<std::string> modules;

  void loadModules();
  void updateState(const std::string &key, const std::string &value);
  std::string getState(const std::string &key) const;
};
