// src/core/NLPEngine.cpp
#include "NLPEngine.hpp"
#include <algorithm>
#include <sstream>


std::vector<std::string> NLPEngine::tokenize(const std::string &input) {
  std::vector<std::string> tokens;
  std::istringstream iss(input);
  std::string token;
  while (iss >> token) {
    tokens.push_back(token);
  }
  return tokens;
}

std::string NLPEngine::recognizeIntent(const std::vector<std::string> &tokens) {
  if (!tokens.empty()) {
    return tokens[0];
  }
  return "unknown";
}

bool NLPEngine::matchPattern(const std::vector<std::string> &tokens,
                             const std::vector<std::string> &pattern) {
  if (tokens.size() != pattern.size()) {
    return false;
  }
  return std::equal(tokens.begin(), tokens.end(), pattern.begin(),
                    [](const std::string &a, const std::string &b) {
                      return b == "*" || a == b;
                    });
}
