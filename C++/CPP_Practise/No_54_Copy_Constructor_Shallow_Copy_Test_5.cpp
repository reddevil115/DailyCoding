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

    // Add New Start Point
    Test(const Test &rhs)
    {
        std :: cout << "Test(const Test &rhs) is activate... \n" << std :: endl;

        value = new int; // Create new memory

        *value = *rhs.value; // Copy data
    }
    // End Point

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

    //Add New Start Point
    ~Test() // If destructor active object is delete then, dynamic memory will erase.
    {
        delete value;
    }
    // End Point
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
