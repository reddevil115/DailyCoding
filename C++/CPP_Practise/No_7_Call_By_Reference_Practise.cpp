#include <iostream>

void changeVal(int &value);

int main(void)
{
    int data = 0;

    std :: cout << "< Call by Reference Test >\n"<< std :: endl;

    std :: cout << "Before Change Value : " << data <<"\n"<< std :: endl;

    changeVal(data);

    std :: cout << "Changed Value : " << data <<"\n"<< std :: endl;

    return 0;
}

void changeVal(int &value)
{
    std :: cout << "Type Change Value : ";
    std :: cin >> value;
    std :: cout << "" << std :: endl;;
}
