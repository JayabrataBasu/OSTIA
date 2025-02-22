// src/core/NLPEngine.hpp
#pragma once
#include <string>
#include <vector>

class NLPEngine {
public:
  static std::vector<std::string> tokenize(const std::string &input);
  static std::string recognizeIntent(const std::vector<std::string> &tokens);
  static bool matchPattern(const std::vector<std::string> &tokens,
                           const std::vector<std::string> &pattern);
};
