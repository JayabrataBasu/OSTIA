#ifndef OSTIA_LOGGER_HPP
#define OSTIA_LOGGER_HPP
#include <string>

namespace OSTIA {
namespace Utils {

class Logger {
public:
  enum class Level { DEBUG, INFO, WARNING, ERROR };

  static void log(Level level, const std::string &message);
  static void debug(const std::string &message);
  static void info(const std::string &message);
  static void warning(const std::string &message);
  static void error(const std::string &message);

private:
  static std::string getLevelString(Level level);
};

} // namespace Utils
} // namespace OSTIA

#endif // OSTIA_LOGGER_HPP
