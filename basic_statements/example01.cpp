/**
  Write a program that initializes two integers 'number1' and 'number2',
  and tests whether number1 is a multiple of number2. Put this result in the
  boolean variable 'result' below.
  */

#include <iostream>

int main()
{
  bool result = false;
  int number1, number2;

  std::cout << "Enter two numbers: ";
  std::cin >> number1 >> number2;

  if (number2 != 0 && number2 % number1 == 0)
  {
    result = true;
  }

  std::cout << result << std::endl;

  return result;
}
