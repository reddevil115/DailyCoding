#include <iostream>

void Test(int input);

int main(void)
{
    Test(100);
    Test(50.5); // Data will lost under ".xx" .

    return 0;
}

void Test(int input)
{
    std :: cout << "* Value : " << input << std :: endl;
}
