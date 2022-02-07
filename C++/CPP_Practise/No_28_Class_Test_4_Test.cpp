#include <iostream>

class Test
{
public:

    void ShowData(void);

    int valOne = 0;
    int valTwo = 0;

    Test()
    : valOne(100), valTwo(500)
    {
        std :: cout << ">>> Class Test() is activate..." << std :: endl;
    }
};

int main(void)
{
    std :: cout << "< Class Test (4) > \n" << std :: endl;

    Test test;

    test.ShowData();

    return 0;
}

void Test :: ShowData(void)
{
    std :: cout << ">>> Test :: ShowData() is activate... \n" << std :: endl;
    std :: cout << "* Value One : " << Test :: valOne << std :: endl;
    std :: cout << "* Value Two : " << Test :: valTwo << std :: endl;
}
