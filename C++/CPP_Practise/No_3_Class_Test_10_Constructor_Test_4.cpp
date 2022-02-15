#include <iostream>

class Test
{
public:
    int value = 0;

    Test()
    {
        std :: cout << ">>> Class Test() is activate... \n" << std :: endl;
    }

    Test(int input)
    {
        value = input;

        std :: cout << ">>> Class Test(" << value << ") is activate... \n" << std :: endl;
    }

    ~Test()
    {
        std :: cout << ">>> ~ Class is activate." << std :: endl;
        std :: cout << ">>> Class is deactivate." << std :: endl;
        std :: cout << ">>> Value : " << value << "\n" << std :: endl;
    }
};

int main(void)
{
    std :: cout << "* Main() Begin \n" << std ::  endl;

    Test testA(10);
    std:: cout << "* Before TestB \n" << std :: endl;
    Test testB;

    std :: cout << "* Main() End \n" << std :: endl;

    return 0;
}
