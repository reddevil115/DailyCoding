#include <iostream>

using namespace std;

namespace Test
{
    int value = 50;

    void t_Function(void)
    {
        cout << ">>> Test :: t_Function() Running... \n" << endl;
    }
}

using namespace Test;

int main(void)
{
    cout << "< Namespace Test > \n" << endl;

    t_Function();
    cout << "* Test :: value : " << value << "\n" << endl;

    return 0;
}
