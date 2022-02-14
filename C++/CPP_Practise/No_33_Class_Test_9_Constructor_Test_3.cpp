#include <iostream>

class Test
{
public:
    Test() // point A
    {
        std :: cout << ">>> Test() is activate... \n" << std :: endl;
    }

    ~Test() // point B
    {
        std :: cout << ">>> ~Test() is activate, Test() is deactivate..." << std :: endl;
    }
};

int main(void)
{
    std :: cout << "* Main() Begin" << std :: endl;
    Test testA; // point A call(1)

    std :: cout << "* Before testB" << std :: endl;
    Test testB; // point A call(2)

    std :: cout << "* Main() conclusion \n" << std :: endl;

    return 0;
} // point B call twice.
