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
  size_t repeat = 1024 * 1024; // repeat * buflength = 1 GB
  constexpr size_t buflength = 1024;
  std::vector<int8_t> buffer(buflength, 0);
  for (size_t i = 0; i < buflength; i++) {
    buffer[i] = i % 10;
  }

  for (size_t i = 0; i < repeat; i++) {
    std::cout.write((char*)buffer.data(), buflength);
    // OR:
    //fwrite(buffer.data(), sizeof(char), buflength, stdout); 
  }

  return EXIT_SUCCESS;
}