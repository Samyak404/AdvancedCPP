/**
 Write a program that draws in the terminal a bigger X out of the character 'X',
 depending on the variable int size (with size = 3, 4, ..., 20):
 size = 3:     size = 4:      size = 5:      etc.
   XX X         XX  X          XX   X
    XX           XXX            XXXX
   X XX          XXX             XX
                X  XX           X XX
                               X   XX      */
#include <iostream> // to allow use of std::cout and std::endl
int main()
{
  int size;

  std::cout << "Enter the size of pattern bettwen 3 to 20: ";
  std::cin >> size;

  for (int i = 0; i < size; i++)
  {
    for (int j = 0; j < size + 1; j++)
    {
      if (i == j or i == (j - 1))
      {
        std::cout << "X";
      }
      else if (i + j == size && i <= (size / 2))
      {
        std::cout << "X";
      }
      else if (i + j == (size - 1) && i >= (size / 2))
      {
        std::cout << "X";
      }
      else
        std::cout << " ";
    }
    std::cout << std::endl;
  }

  return 0;
}
