#include "Logger.hpp"
#include <chrono>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <sstream>


namespace OSTIA {
namespace Utils {

void Logger::log(Level level, const std::string &message) {
  // Get current time
  auto now = std::chrono::system_clock::now();
  auto time = std::chrono::system_clock::to_time_t(now);

  std::stringstream ss;
  ss << "[" << std::put_time(std::localtime(&time), "%Y-%m-%d %H:%M:%S") << "]"
     << "[" << getLevelString(level) << "] " << message;

  std::cout << ss.str() << std::endl;
}

void Logger::debug(const std::string &message) { log(Level::DEBUG, message); }

void Logger::info(const std::string &message) { log(Level::INFO, message); }

void Logger::warning(const std::string &message) {
  log(Level::WARNING, message);
}

void Logger::error(const std::string &message) { log(Level::ERROR, message); }

std::string Logger::getLevelString(Level level) {
  switch (level) {
  case Level::DEBUG:
    return "DEBUG";
  case Level::INFO:
    return "INFO";
  case Level::WARNING:
    return "WARNING";
  case Level::ERROR:
    return "ERROR";
  default:
    return "UNKNOWN";
  }
}

} // namespace Utils
} // namespace OSTIA
