#include <iostream>

// It is not include anywhere. (Global)
void NullSet(void)
{
    std :: cout << ">>> :: NullSet() Activate... \n" << std :: endl;
}

namespace Test
{
    // It is include namespace "Test".
    void NullSet(void)
    {
        std :: cout << ">>> Test :: NullSet() Activate... \n" << std :: endl;
    }
}

namespace Stat
{
    // It is include namespace "Stat".
    void NullSet(void)
    {
        std :: cout << ">>> Stat :: NullSet() Activate... \n" << std :: endl;
    }
}

int main(void)
{
    std :: cout << "< Namespace overlay Test > \n" << std :: endl;

    NullSet();
    ::NullSet(); // Write this when that is include nowhere.

    Test :: NullSet();
    Stat :: NullSet();

    return 0;
}
