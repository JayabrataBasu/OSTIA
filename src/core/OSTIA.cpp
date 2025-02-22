// src/core/OSTIA.cpp
#include "OSTIA.hpp"
#include "NLPEngine.hpp"
#include <stdexcept>

OSTIA::OSTIA() { loadModules(); }

void OSTIA::loadModules() {
  // TODO: Implement module loading
  modules = {"core", "nlp"};
}

void OSTIA::updateState(const std::string &key, const std::string &value) {
  systemState[key] = value;
}

std::string OSTIA::getState(const std::string &key) const {
  auto it = systemState.find(key);
  if (it != systemState.end()) {
    return it->second;
  }
  throw std::runtime_error("State key not found");
}

std::string OSTIA::processCommand(const std::string &command) {
  std::vector<std::string> tokens = NLPEngine::tokenize(command);
  std::string intent = NLPEngine::recognizeIntent(tokens);

  if (intent == "get") {
    if (NLPEngine::matchPattern(tokens, {"get", "state", "*"})) {
      return getState(tokens[2]);
    }
  } else if (intent == "set") {
    if (NLPEngine::matchPattern(tokens, {"set", "state", "*", "*"})) {
      updateState(tokens[2], tokens[3]);
      return "State updated";
    }
  }

  return "Unknown command";
}
