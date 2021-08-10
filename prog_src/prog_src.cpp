// pipes_test.cpp : Defines the entry point for the application.
//
//#pragma once

#include <vector>
#include <cstdint>
#include <charconv>
#include <cstring>
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{

  std::ios_base::sync_with_stdio(false);
  size_t repeat = 100000;
  constexpr size_t buflength = 128; //16384;
  std::vector<char> buffer(buflength, ' ');

  for (size_t i = 0; i < repeat; i++) {
    std::cout.write(buffer.data(), buflength);
  }

  return EXIT_SUCCESS;
}
