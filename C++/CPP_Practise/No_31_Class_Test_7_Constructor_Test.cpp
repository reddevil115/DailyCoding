#include <iostream>

class Test
{
public:
    Test()
    {
        std :: cout << "Test() : Class Test is activate... \n" << std :: endl;
    }

    ~Test()
    {
        std :: cout << "~Test() : Class Test is deactivate... \n" << std :: endl;
    }
};

int main(void)
{
    std :: cout << "< Class Test (6) > \n" << std :: endl;
    std :: cout << ">>> Begin : " << std :: endl;

    Test test;

    std :: cout << ">>> End : " << std :: endl;

    return 0;
} // Destructor Call Point.
