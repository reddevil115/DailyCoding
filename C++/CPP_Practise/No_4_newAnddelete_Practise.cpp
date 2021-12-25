#include <iostream>

int main(void)
{
    int *value = new int; //without initial value
    int *newValue = new int(100); //with initial value

    *value = 100;

    std :: cout << "* Value : " << *value << std :: endl;
    std :: cout << "* New Value : " << *newValue << std :: endl;

    delete value;
    delete newValue;

    return 0;
}
