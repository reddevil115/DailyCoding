#include <iostream>
#include <cstdio>

class Test
{
public:

    int ages = 0;
    char name[50];

    void PrintValue(void)
    {
        std :: cout << "* Ages : "<< ages << std :: endl;
        std :: cout << "* name : "<< name << std :: endl;
    }

};

int main(void)
{
    Test test = { 20, "KIM"};

    std :: cout << "< Class Test(1) >\n" << std :: endl;

    test.PrintValue();

    return 0;
}
