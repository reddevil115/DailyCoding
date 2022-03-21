#include <iostream>

class Test
{
private:
    int value = 0;

public:
    Test()
    {
        std :: cout << ">> Class Test() is activate..." << std :: endl;
    }

    Test(const Test &rhs) : value(rhs.value) // Declare and Define Copy Constructor (Point A)
    {
        this -> value = rhs.value;

        std :: cout << ">> Class Test() Copy Constructor is activate..." << std :: endl;
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

int main(void)
{
    int buffer = 0;

    std :: cout << "* Type a value : ";
    std :: cin >> buffer;
    std :: cout << "\n";

    Test testA;
    testA.SetValue(buffer);

    buffer = 0;

    Test testB(testA);

    std :: cout << "\n";
    std :: cout << "# Value : " << testB.GetValue() << std :: endl;

    return 0;
}
