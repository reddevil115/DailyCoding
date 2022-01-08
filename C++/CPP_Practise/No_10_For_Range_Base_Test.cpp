#include <iostream>
#define MAX 5

int main(void)
{
    int array[MAX];
    int i = 0;
    bool isFinish = false;

    // For Loop for C programming

    std :: cout << "# 1. C Programming For Loop \n"  << std :: endl;

    for(i = 0; i < MAX; i++)
    {
        array[i] = i;
        std :: cout << "* array[" << i << "] Value : " << array[i] << std :: endl;
    }


    std :: cout << " " << std :: endl;


    // For Loop for C++

    std :: cout << "# 2. C++ For Loop \n"  << std :: endl;

    // Approach by values

    /*
    for(auto n : array)
    {
        array[n] += 1;
        std :: cout << "* array[" << n << "] Value : " << array[n] << std :: endl;
    }
    */

    // Approach by address

    for(auto &n : array)
    {
        std :: cout << "* array[" << n << "] Value : " << array[n] << std :: endl;
    }


    std :: cout << " " << std :: endl;

    return 0;
}
