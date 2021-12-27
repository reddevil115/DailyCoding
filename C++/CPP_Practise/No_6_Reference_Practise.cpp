#include <iostream>

int main(void)
{
    int value = 100;
    int &reference = value;

    std :: cout << "# Original Data : " << value << std :: endl;

    reference = 200;

    std :: cout << "# Change Data by < &reference > : " << value << std :: endl;

    int *preference = &reference;
    *preference = 300;

    std :: cout << "# Change Data by < *preference > : " << value << std :: endl;

    return 0;
}
