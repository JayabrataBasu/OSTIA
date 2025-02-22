// src/core/OSTIA.hpp
#pragma once
#include <memory>
#include <string>

namespace OSTIA {

class OSTIA {
private:
  class Implementation;
  std::unique_ptr<Implementation> pImpl; // PIMPL idiom for better encapsulation

public:
  OSTIA();
  ~OSTIA();

  // Core methods
  void processCommand(const std::string &command);
  void initialize();
  bool isReady() const;
};

} // namespace OSTIA
