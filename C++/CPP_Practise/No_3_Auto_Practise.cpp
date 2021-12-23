#include <iostream>

int main(void)
{
    int a = 100;
    std :: string b = "100";

    auto c(a);
    auto d(b);

    std :: cout << "This is a <int>, and value is " <<  c << std :: endl;
    std :: cout << "This is a <string>, and value is " << d << std :: endl;

    return 0;
}
