#include <iostream>

template <typename type>
type Function(type t)
{
    std :: cout << "parameter value : " << t << std :: endl;

    return t;
}

int main(void)
{
    std :: cout << "int\t" << Function(10) << std :: endl;
    std :: cout << "double\t" << Function(5.5) << std :: endl;
    std :: cout << "char\t" << Function('$') << std :: endl;
    std :: cout << "char*\t" << Function("Hello World") << std :: endl;

    return 0;
}
