#include <iostream>

class Test
{

private:
    int value = 0;

public:
    Test(int input) : value(input) {};

    void ShowData()
    {
        std :: cout << "* Value : " << value << std :: endl; // print member variable way #1.
        std :: cout << "* Value : " << Test :: value << std :: endl; // print member variable way #2.
        std :: cout << "* value : " << this -> value << std :: endl; // print member variable way #3.
        std :: cout << "* Value : " << this -> Test :: value << "\n" << std :: endl; // print member variable way #4.
    }
};

int main(void)
{
    Test test_A(10);
    Test test_B(100);

    test_A.ShowData();
    test_B.ShowData();

    return 0;
}
