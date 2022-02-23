#include <iostream>

class Test
{
private:
    int value = 0;

public:

    Test(int a) : value(a) {};
    Test(int a, int b) : value(a * b) {};

    int SendData()
    {
        return value;
    }
};

int main(void)
{
    int bufferA = 0;
    int bufferB = 0;

    std :: cout << "# Try 1 \n" << std :: endl;
    std :: cout << "* Type Value : ";
    std :: cin >> bufferA;

    Test testA(bufferA);
    bufferA = 0;

    std :: cout << ">>> Try 1's result : " << testA.SendData()<<"\n"<< std :: endl;

    std :: cout << "# Try 2 \n" << std :: endl;
    std :: cout << "* Type Value 1 : ";
    std :: cin >> bufferA;

    std :: cout << "* Type Value 2 : ";
    std :: cin >> bufferB;

    Test testB(bufferA, bufferB);

    std :: cout << ">>> Try 2's result : " << testB.SendData() << std :: endl;

    return 0;
}
