#include <iostream>

class Test
{
public:

    Test(void) = default;

    int value = 100;
};

int main(void)
{
    Test test;

    std :: cout << "* Value : " << test.value << std :: endl;

    return 0;
}
