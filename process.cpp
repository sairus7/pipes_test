#include <vector>
#include <cstdint>
#include <charconv>
#include <cstring>
#include <iostream>
#include <cstdlib>
#include <stddef.h>

int main()
{
  //std::ios_base::sync_with_stdio(false);
  constexpr size_t cache_length = 1024;
  uint8_t cachebuffer[cache_length];

  while (std::cin) {
    std::cin.read((char*)cachebuffer, cache_length);

    for (size_t i = 0; i < std::cin.gcount(); i++) {
      cachebuffer[i] = -cachebuffer[i]; // change data
    }

    std::cout.write((char*)cachebuffer, cache_length);
  }

  return EXIT_SUCCESS;
}
