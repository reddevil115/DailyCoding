#include <iostream>

namespace Test
{
    int value = 50;

    void t_Function(void)
    {
        std :: cout << ">>> Test :: t_Function() Running... \n" <<std :: endl;
    }
}

int main(void)
{
    std :: cout << "< Namespace Test > \n" << std :: endl;

    Test :: t_Function();
    std :: cout << "* Test :: value : " << Test :: value << "\n" << std :: endl;

    return 0;
}
