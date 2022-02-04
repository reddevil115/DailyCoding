#include <iostream>

class Test
{
public:

    int value = 0;

    Test() // Constructor
    {
        //If class test call, value will be set automatically set below data.
        value = 100;

        std :: cout << ">>> Class Test() constructor is activate... \n" << std :: endl;
    }

    void ShowValue()
    {
        std :: cout << "* Value : " << value << std :: endl;
    }
};

int main(void)
{
    std :: cout << "< Class Test (2) > \n" << std :: endl;

    Test test; // set class variable

    test.ShowValue();

    return 0;
}
