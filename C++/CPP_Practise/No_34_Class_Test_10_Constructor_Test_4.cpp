#include <iostream>

class Test
{
    int value = 0;

public:
    Test()
    {
        std :: cout << ">>> Class Test is activate..." << std :: endl;
    }

    ~Test()
    {
        std :: cout << ">>> ~ Class Test is activate..." << std :: endl;
        std :: cout << ">>> Class Test is deactivate..." << std :: endl;
    }

};

int main(void)
{
    std :: cout << "* Main() is running..." << std :: endl;

    Test *test = new Test;

    std :: cout << "[Before Delete Class Test]" << std :: endl;

    delete test;

    std :: cout << "* Main is stop running..." << std :: endl;

    return 0;
}
