#include <iostream>

void Test(const int &input);

int main(void)
{
    int buffer = 0;

    std :: cout << "* Type a value : ";
    std :: cin >> buffer;

    std :: cout << "* Value Before : " << buffer << std :: endl;

    Test(buffer);

    std :: cout << "* Value Now : " << buffer << std :: endl;

    return 0;
}

void Test(const int &input)
{
    int &value = const_cast <int &> (input); // change variable form : Constant to Normal reference.
    value = 50;
}
