#include <iostream>

int main()
{
    int size = 10;

    for (int i = 1; i <= size + (size - 1); i++)
    {

        for (int j = 1; j <= size; j++)
        {
            if (i < j)
            {
                std::cout << " ";
            }
            else if (i + j > size * 2)
            {
                std::cout << " ";
            }
            else
            {
                std::cout << "X";
            }
        }
        std::cout << std::endl;
    }
    return 0;
}