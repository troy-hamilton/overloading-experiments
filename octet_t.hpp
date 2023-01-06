#include <concepts>
#include <cstdint>
#include <bitset>

// specifies types that are one byte, and support math operations.
template <typename H>
concept arithmetic_octet_type = 
std::same_as<H, char>           or
std::same_as<H, signed char>    or
std::same_as<H, unsigned char>  or
std::same_as<H, int8_t>         or
std::same_as<H, uint8_t>;  

// specifies types that are one byte, and are not required to support math.
template <typename H>
concept octet_type =
arithmetic_octet_type<H>        or
std::same_as<H, std::byte>;
