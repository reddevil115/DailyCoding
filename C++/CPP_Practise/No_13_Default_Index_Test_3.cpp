/*

< Code Notice >

* This function is not recommendation for use.
* Just for reference.

*/

#include <iostream>

int function(int value, int valueTwo = 10);

int main(void)
{
    int buffer = 0;

    std :: cout << "[Case 1. Only set 1 Parameter]\n"<< std :: endl;
    buffer = function(100);

    std :: cout << "* Result : " <<  buffer << "\n" << std :: endl;

    std :: cout << "[Case 2. Only set 2 Parameter]\n"  << std :: endl;
    buffer = function(100,100);

    std :: cout << "* Result : " << buffer << "\n" << std :: endl;

    return 0;
}

int function(int value, int valueTwo)
{
    std :: cout << "* Value One : " << value << std :: endl;
    std :: cout << "* Value Two : " << valueTwo << std :: endl;

    return value * valueTwo;
}
