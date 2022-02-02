#include <iostream>

int main(void)
{
    const int MAX(5);
    int value(0); // This will be call

    std :: cout << ">>> Type number that is higher than " << MAX << " : ";
    std :: cin >> value;

    std :: cout << " " << std :: endl;

    if(value > MAX) // That will be call here.
    {
        std :: cout << "* You just type higher than " << MAX << std :: endl;
        std :: cout << "* Your Type : " << value << std :: endl;
        std :: cout << "* Result : Success" << std :: endl;
    }

    else
    {
        std :: cout << "* ERROR : You just type lower than " << MAX << std :: endl;
        std :: cout << "* Your Type : " << value << std :: endl;
        std :: cout << "* Result : Fail" << std :: endl;
    }

    return 0;
}
