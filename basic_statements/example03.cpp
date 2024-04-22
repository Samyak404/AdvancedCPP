/**
  Write a program that asks the user for a number, and then prints out this number
  in the terminal, followed by the half of the previous number until
  the result is smaller than ten. So for 100 it would give out: 100, 50, 25.5, 12.25
  */
#include <iostream> // to allow use of std::cout and std::endl
int main()
{

  float number;

  std::cout << "Enter the Number: ";
  std::cin >> number;

  while (number > 10.0)
  {
    std::cout << number << " ";
    number /= 2.0;
  }

  std::cout << std::endl;

  return 0;
}
