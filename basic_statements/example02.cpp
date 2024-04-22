/**
  Write a program that prints out a series of numbers, starting at 120.0 and where
  each next number is seven less than the previous one. Stop once the number is
  smaller than 43.7
  */
#include <iostream> // to allow use of std::cout and std::endl
int main()
{

  float number = 120.0;

  while (number > 43.7)
  {
    std::cout << number << " ";
    number = number - 7.0;
  }

  std::cout << std::endl;

  return 0;
}
