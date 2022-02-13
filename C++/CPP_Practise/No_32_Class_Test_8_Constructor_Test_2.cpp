#include <iostream>

class Test
{
public:

    Test() // A point
    {
        std :: cout << ">>> Test() is activate..." << std :: endl;
    }

    ~Test() // B point
    {
        std :: cout << ">>> ~Test() is activate, Test() is deactivate... " << std :: endl;
    }
};

Test test; // A point call

int main(void)
{
    std :: cout << "* main() is running..." << std :: endl;
    std :: cout << "* main() is stop running... " << std :: endl;

    return 0; // B point call
}
