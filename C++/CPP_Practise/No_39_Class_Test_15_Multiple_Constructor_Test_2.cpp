#include <iostream>

class Test
{
private:
    int value_A = 0;
    int value_B = 0;

public:
    Test(int input)
    {
        std :: cout << ">>> Test(int) is activate... \n" << std :: endl;

        if(input > 10)
        {
            input = 10;
            value_A = input;
        }

        else
        {
            value_A = input;
        }
    }

    Test(int input_A, int input_B) : Test(input_A)
    {
        std :: cout << ">>> Test(int, int) is activate... \n" << std :: endl;

        if(input_B > 20)
        {
            input_B = 20;
            value_B = input_B;
        }

        else
        {
             value_B = input_B;
        }
    }

    void ShowData()
    {
        std :: cout << "* value_A : " << value_A << std :: endl;

        if(value_B != 0)
        {
            std :: cout << "* value_B : " << value_B << std :: endl;
        }

        else
        {
            std :: cout << "* value_B : NULL" << std :: endl;
        }
    }
};

int main(void)
{
    int buffer_A = 0;
    int buffer_B = 0;

    std :: cout << "#1. Try \n" << std :: endl;

    std :: cout << "> Type Value A : ";
    std :: cin >> buffer_A;

    Test test_A(buffer_A);
    buffer_A = 0;

    std :: cout << "#2 Try \n" << std :: endl;

    std :: cout << "> Type Value A : ";
    std :: cin >> buffer_A;

    std :: cout << "> Type Value B : ";
    std :: cin >> buffer_B;

    Test test_B(buffer_A, buffer_B);

    std :: cout << ">>> Try 1's Result: " << std :: endl;
    test_A.ShowData();

    std :: cout << " " << std :: endl;

    std :: cout << ">>> Try 2's Result: " << std :: endl;
    test_B.ShowData();

    return 0;
}
