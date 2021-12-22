#include <string>
#include <cstdio>
#include <iostream>

int main(void)
{
    int age;
    std :: string name;

    /*
    1. std :: cout << "Example" << std :: endl;

     => with space.

    2. std :: cout << "Example";

     => with no space.

    */

    std :: cout << "< Type Your Information > \n" << std :: endl;
    std :: cout << "Type Your Name : ";
    std :: cin >> name;

    std :: cout << "Type Your Age : ";
    std :: cin >> age;
    std :: cout << " " << std :: endl;

    std :: cout << "< Check Your Information > \n" << std :: endl;
    std :: cout << "* Your Name : " << name << std :: endl;
    std :: cout << "* Your Ages : " << age << std :: endl;
    std :: cout << " " << std :: endl;

    return 0;
}
