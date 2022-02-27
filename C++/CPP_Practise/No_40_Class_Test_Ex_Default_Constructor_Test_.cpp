#include <iostream>

class Test
{
private:
    int value = 0;

    setValue()
    {
        value = 100;
    }

public:
    Test(void);

    int showData()
    {
        return value;
    }
};

int main(void)
{
    Test test;

    std :: cout << "* Value : " << test.showData() << std :: endl;

    return 0;
}

Test :: Test(void)
{
    std :: cout << ">>> Test :: test(void) is activate... " << std :: endl;
    setValue();
}
