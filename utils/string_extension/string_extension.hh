/**
  * \file Extensional functions to string standard library
  */
#ifndef STRING_EXTENSION_H
#define STRING_EXTENSION_H

#include <string>

/**
  * \brief Replace all occurrences of sub-string
  *
  * Internally, this function use pure string's standard library to
  * accomplish replacing all sub-string with another sub-string.
  * Alternatively, one can choose the replacement function from regex
  * to do the same thing.
  *
  * \param[out] str This string
  * \param[in]  oldStr The sub-string to be replaced by
  * \param[in]  newStr The sub-string to be replaced with
  */
void replaceAll(std::string &str, std::string oldStr, std::string newStr);

#endif // STRING_EXTENSION_H
