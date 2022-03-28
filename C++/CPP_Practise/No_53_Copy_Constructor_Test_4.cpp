#include <iostream>

class Test
{
private:
    int value = 0;

public:
    Test()
    {
        std :: cout << ">>> Class Test() is activate..." << std :: endl;
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

int main(void)
{
    int buffer = 0;

    std :: cout << "* Type a Value : ";
    std :: cin >> buffer;
    std :: cout << "\n";

    Test testA;
    testA.SetValue(buffer);

    Test testB(testA);

    std :: cout << "\n";
    std :: cout << "* Value : " << testB.GetValue() << std :: endl;

    return 0;
}
