#include <iostream>

class Test
{
private:
    int * value = nullptr;

public:
    Test(int input)
    {
        value = new int;
        *value = input; // Set Value
    }

    int GetValue()
    {
        if(value != NULL)
        {
            return *value;
        }

        else
        {
            return 0;
        }
    }
};

int main(void)
{
    int buffer = 0;

    std :: cout << "* Type a Value : ";
    std :: cin >> buffer;
    std :: cout << "\n";

    Test testA(buffer);
    Test testB(testA);

    std :: cout << "* Test A's Value : " << testA.GetValue() << std :: endl;
    std :: cout << "* Test B's Value : " << testB.GetValue() << std :: endl;

    return 0;
}
