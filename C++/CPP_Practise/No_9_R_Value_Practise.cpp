#include <iostream>

int rValueTest(int value);

int main(void)
{
    int input = 0;

    std :: cout << "Type a Number : ";
    std :: cin >> input;
    std :: cout << "\n";
    std :: cout << "Input Data : " << input <<"\n" << std :: endl;

    int &&rValue = input * 10;

    std :: cout << "R Value Data : " << rValue <<"\n" << std :: endl;

    rValue = rValueTest(rValue);
    std :: cout << "R Value Data : " << rValue <<"\n" << std :: endl;

    rValue *= 10;
    std :: cout << "R Value Data : " << rValue <<"\n" << std :: endl;

    return 0;
}

int rValueTest(int value)
{
    int result = 0;

    result = value * 10;

    return result;
}
