#include <iostream>

int value = 50; // This will not call.
int data = 50; // This will be call.

namespace Test
{
    int value = 100; // This will be call.

    void PrintValue()
    {
        std :: cout << "* Value : " << value << std :: endl;
        std :: cout << "* Data : " << data << std :: endl;
    }

    int data = 100; // This will not call.
}

int main(void)
{
    Test :: PrintValue();

    return 0;
}
