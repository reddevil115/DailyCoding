#include <iostream>

namespace Test
{
    int val = 50;

    namespace Alpha
    {
        int val = 100;

        namespace Delta
        {
            int val = 150;
        }
    }
}

int main(void)
{
    std :: cout << "< Multiple Namespace Test > \n" << std :: endl;

    std :: cout << ">>> Test :: val() : " << Test :: val << std :: endl;
    std :: cout << ">>> Test :: Alpha :: val () : " << Test :: Alpha :: val << std :: endl;
    std :: cout << ">>> Test :: Alpha :: Delta :: val () : " << Test :: Alpha :: Delta :: val << std :: endl;

    return 0;
}
