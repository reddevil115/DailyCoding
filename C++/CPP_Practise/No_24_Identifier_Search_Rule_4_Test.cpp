#include <iostream>

int value = 50; // This will not call.

namespace Test
{
    int value = 100; // This will be call.
}

int main(void)
{
    std :: cout << "*  value : " << Test :: value << std :: endl;

    return 0;
}
