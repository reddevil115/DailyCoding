#include <iostream>

class Test
{
private:
    int value = 0;

public:
    Test() : value(0) {};

    int GetData(void)
    {
        return value;
    }

    void SetData(int input)
    {
        value = input;

        std :: cout << "* [int] value is inserted." << std :: endl;
    }

    void SetData(double input)
    {
        value = 0;

        std :: cout << "* [double] value is inserted." << std :: endl;
    }
};

int main(void)
{
    int value_One = 10;
    double value_Two = 0.5;

    Test testOne;
    Test testTwo;

    testOne.SetData(value_One);
    testTwo.SetData(value_Two);

    std :: cout << "Result A Value : " << testOne.GetData() << std :: endl;
    std :: cout << "Result B Value : " << testTwo.GetData() << std :: endl;

    return 0;
}
