#include <iostream>

class Test
{
public:

    void ShowData(void);

    int valOne = 100;
    int valTwo = 500;

    Test()
    {
        std :: cout << ">>> Class Test is activate..." << std :: endl;
    }

};

int main(void)
{
    std :: cout << "< Class Test (5) > \n" << std :: endl;

    Test test;

    test.ShowData();

    return 0;
}

 void Test :: ShowData(void)
 {
     std :: cout << ">>> Test :: ShowData is activate... \n" << std :: endl;
     std :: cout << "* Value One : " << Test :: valOne << std :: endl;
     std :: cout << "* Value Two : " << Test :: valTwo << std :: endl;
 }
