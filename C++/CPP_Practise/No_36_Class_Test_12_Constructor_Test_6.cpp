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
    std :: cout << "* Main() begin." << std :: endl;

    Test *test = new Test[5];
    delete test;

    std ::  cout << "* Main() end." << std :: endl;

    return 0;
}

