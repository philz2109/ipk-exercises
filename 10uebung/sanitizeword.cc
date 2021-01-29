#include "sanitizeword.hh"

#include <algorithm>
#include <cctype>
#include <iterator>
#include <utility>

std::string sanitize_word(const std::string& s) {
  std::string out;
  std::copy_if(begin(s), end(s), back_inserter(out),
               [](auto c) { return std::isalpha(c); });
  std::transform(begin(out), end(out), begin(out),
                 [](auto c) { return std::tolower(c); });
  return out;
}
