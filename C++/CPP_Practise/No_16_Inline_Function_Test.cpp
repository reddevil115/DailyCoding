#include <cstdio>
#include <iostream>

#define ADD(a,b)((a) + (b))

int Add(int a, int b);
inline int Add_i(int a, int b);

int main(void)
{
    int a;
    int b;

    std :: cout <<"* Pre Input : \n"<< std :: endl;
    std :: cout << ">>> Type A : ";
    std :: cin >> a ;

    std :: cout << ">>> Type B : ";
    std :: cin >> b ;

    std :: cout <<""<< std :: endl;

    std :: cout <<"* Results : \n"<< std :: endl;
    std :: cout <<">>> ADD() : " << ADD(a,b) << std :: endl;
    std :: cout <<">>> Add() : " << Add(a,b) << std :: endl;
    std :: cout <<">>> Add_i() : " << Add_i(a,b) << std :: endl;

    return 0;
}

int Add(int a, int b)
{
    return a + b;
}

inline int Add_i(int a, int b)
{
    return a + b;
}
