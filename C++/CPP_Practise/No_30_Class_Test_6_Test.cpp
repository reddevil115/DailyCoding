#include <iostream>

class Test
{
    int value = 0;

public:

    Test()
    {
        std :: cout << "< Class Test(6) > \n" << std :: endl;
    }

    void SetData(int input)
    {
        value = input;

    }

    int GetData()
    {
        return value;
    }
};

int main(void)
{
    Test test;

    int buffer = 0;

    std :: cout << ">>> Type Value : ";
    std :: cin >> buffer;

    std :: cout << " " << std :: endl;

    test. SetData(buffer);

    std :: cout << "* Value : " << test. GetData() << std :: endl;

    return 0;
}
