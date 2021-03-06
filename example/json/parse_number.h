#pragma once

#include <string_view>

namespace bbai::jsonex {
//--------------------------------------------------------------------------------------------------
// is_number_leading_char
//--------------------------------------------------------------------------------------------------
bool is_number_leading_char(char c) noexcept;

//--------------------------------------------------------------------------------------------------
// parse_number
//--------------------------------------------------------------------------------------------------
int parse_number(std::string_view& s);
} // namespace bbai::jsonex
