#include <iostream>

class Test
{
private:
    int value = 0;

public:
    Test(int input) : value(input) {};

    ~Test()
    {
        std :: cout << "\n" << std :: endl;
        std :: cout << "Class Test is deactivate... " << std :: endl;
    }

    int ShowData() const // It only can read data, not write data.
    {
        return value;
    }
};

int main(void)
{
    int buffer = 0;

    std :: cout << ">>> Type Value : ";
    std :: cin >> buffer;

    Test test(buffer);

    std :: cout << "* Value : " << test.ShowData() << std :: endl;
    return 0;
}
