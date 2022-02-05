#include <iostream>

class Test
{
public:

    void ShowValue(void); // Declare member function of this class.

    int value = 0;

    Test()
    {
        std :: cout << ">>> ' Class Test() ' is activate ..." << std :: endl;
        value = 100;
    }
};

int main(void)
{
    std :: cout << "< Class Test (3) > \n" << std :: endl;

    Test test;

    test.ShowValue();

    return 0;
}

void Test :: ShowValue(void) // Definition function where outside of it's class.
{
    std :: cout << ">>> ' Test :: ShowValue() ' is activate ... \n" << std :: endl;
    std :: cout << "* Value : " << value << std :: endl;
}
