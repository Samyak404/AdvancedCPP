/**
 Write a program that prints in the terminal all prime numbers from 3 till 99.
 Remember: A number is a prime when any division by a smaller number results in
 a remainder that is never zero.
*/
#include <iostream> // to allow use of std::cout and std::endl
int main()
{

  for (int i = 3; i <= 99; i++)
  {
    bool isPrime = 1;
    for (int j = 2; j < i; j++)
    {
      if (i % j == 0)
      {
        isPrime = false;

        break;
      }
    }
    if (isPrime)
    {
      std::cout << i << " ";
    }
  }

  return 0;
}
