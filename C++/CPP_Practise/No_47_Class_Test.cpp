#include <iostream>

class Test
{
private:
    int i_value = 0;
    double f_value = 0.0f;

public:
    Test() { };

    int I_GetValue(void) const
    {
        return i_value;
    }

    double D_GetValue(void) const
    {
        return f_value;
    }

    void SetValue (int input)
    {
        i_value = input;
    }

    void SetValue (double input)
    {
        f_value = input;
    }
};

int main(void)
{
    Test test_A;
    Test test_B;

    double f_buffer;
    int i_buffer;

    std :: cout << "Type (int )Value : ";
    std :: cin >> i_buffer;

    std :: cout << "Type (double) Value : ";
    std :: cin >> f_buffer;

    test_A.SetValue(f_buffer);
    test_B.SetValue(i_buffer);

    std :: cout << "\m" << std :: endl;

    std :: cout << "< Result >" << std :: endl;
    std :: cout << "* Test A's Value : " << test_A.D_GetValue() << std :: endl;
    std :: cout << "* Test B's Value : " << test_B.I_GetValue() << std :: endl;

    return 0;
}
