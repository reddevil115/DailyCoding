#include <iostream>

int value(50); // This is not call.

int main(void)
{
    int value(100); // This will be call.

    std :: cout << "* Value : " << value << std :: endl;

    return 0;
}
