#include <iostream>

void swapData(int &a, int &b);

int main(void)
{
    int a = 0;
    int b = 0;

    std :: cout << "< Preparing Stage > \n" << std :: endl;

    std :: cout << "* Type A : ";
    std :: cin >> a;

    std :: cout << "* Type B : ";
    std :: cin >> b;

    std :: cout << " " << std :: endl;
    std :: cout << "< Your Type Information > \n" << std :: endl;
    std :: cout << "* A : " << a << "\n"  << "* B : " << b << "\n"<< std :: endl;

    std :: cout << "< Swap Stage > \n" << std :: endl;
    swapData(a, b);

    std :: cout << "< Result Stage > \n" << std :: endl;
    std :: cout << "* A : " << a << "\n"  << "* B : " << b << std :: endl;

    return 0;

}

void swapData(int &a, int &b)
{
    int buffer = a;
    a = b;
    b = buffer;

    std :: cout << "Swap Complete ! \n" << std :: endl;
}
