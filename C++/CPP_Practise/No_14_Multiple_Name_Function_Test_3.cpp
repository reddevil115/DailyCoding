#include <iostream>


int Add(int a, int b, int c);
int Add(int a, int b);
double Add(double a, double b);

int main(void)
{
    std :: cout << Add(10,100,1000)<< "\n" << std :: endl;
    std :: cout <<Add(10, 100) << "\n" <<std :: endl;
    std :: cout << Add(1.5,10.0)<< "\n" << std :: endl;

    return 0;
}

int Add(int a, int b, int c)
{
    std :: cout << "[Case 1. input : int, int, int]" << std :: endl;
    std :: cout << "* int a : " << a << ", int b : " << b << ", int c :" << c << std :: endl;
    std :: cout << ">>> ";

    return a + b + c;
}

int Add(int a, int b)
{
    std :: cout << "[Case 2. input : int, int]" << std :: endl;
    std :: cout << "* int a : " << a << ", int b : " << b << std :: endl;
    std :: cout << ">>> ";

    return a + b;
}

double Add(double a, double b)
{
    std :: cout << "[Case 3. input : double, double]" << std :: endl;
    std :: cout << "* double a : " << a << ", double b : " << b << std :: endl;
    std :: cout << ">>> ";

    return a + b;
}
