#include <iostream>

class Test
{
private:
    int value = 0;

public:
    Test(int input) : value(input)
    {
        std :: cout << ">>> Test(int input) is activate..." << std :: endl;
    }

    Test(const Test &rhs) : value(rhs.value)
    {
        std :: cout << ">>> Test(const Test &rhs) is activate..." << std :: endl;
    }

    int GetValue(void)
    {
        return value;
    }

    void SetValue(int input)
    {
        value = input;
    }
};

void TestFunc(Test param);

int main(void)
{
    int buffer = 0;

    std :: cout << "Type a Value : ";
    std :: cin >> buffer;
    std :: cout << "\n";

    std :: cout << "********** Begin **********\n" << std :: endl;

    Test test(buffer);
    TestFunc(test);

    std :: cout << "* Value : " << test.GetValue() << std :: endl;

    std :: cout << "*********** End ***********\n" << std :: endl;
    return 0;
}

void TestFunc(Test param)
{
    std :: cout << ">>> TestFunc() is activate..." << std :: endl;
    param.SetValue(0);
}
