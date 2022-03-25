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

    int GetValue()
    {
        return value;
    }

    void SetValue(int input)
    {
        value = input;
    }
};

void TestFunc(Test &param, int input);

int main(void)
{
    int buffer = 0;

    std :: cout << "* Type a value : ";
    std :: cin >> buffer;
    std :: cout << "\n";

    std :: cout << "********** Begin ********** \n" << std :: endl;

    Test test(buffer);
    TestFunc(test,buffer);

    std :: cout << "\n";
    std :: cout << "* Value : " << test.GetValue() << std :: endl;

    std :: cout << "\n";
    std :: cout << "*********** End ***********\n" << std :: endl;
    return 0;
}

void TestFunc(Test &param, int input)
{
    std :: cout << ">>> TestFunc(Test &param) is activate..." << std :: endl;
    param.SetValue(input);
}
