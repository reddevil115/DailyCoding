#include <iostream>

class Test
{
private:
    int value = 0;

public:
    Test(int &value_i) : value(value_i) {};

     ~Test()
    {
        std :: cout << "* Value : " << value << std :: endl;
    }

    int pushData(void)
    {
        return value;
    }
};

int main(void)
{
    int tempo = 0;

    std :: cout << "* Type Number : ";
    std :: cin >> tempo;

    Test test(tempo);

    tempo = 0;

    tempo = test.pushData();

    std :: cout << ">>> [" << tempo << "] is successfully inserteds." << std :: endl;

    return 0;
}
