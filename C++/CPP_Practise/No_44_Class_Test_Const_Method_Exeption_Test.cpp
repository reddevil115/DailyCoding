#include <iostream>

using namespace std;

class Test
{
private:
    mutable int value = 0;

public:
    Test(int input) : value(input)
    {
        cout << "* Input Value : " << value << endl;
        showData();
    }

    ~Test()
    {
        cout << "* Value Now : " << value << endl;
    }

    int showData() const
    {
        value = 50; // if variable set mutable it can change data even if class set as "constant".

        return value;
    }
};

int main(void)
{
    int buffer = 0;

    cout << "* Type Value : ";
    cin >> buffer;

    Test test(buffer);


    return 0;
}
