#include <iostream>

class Test
{
private:
    int value = 0; // Non Static Member
    static int counts; // Static Member. It is not a define member. (Point 01)

public:
    Test(int input) : value(input)
    {
        counts++;
        std :: cout << "increase Count...( Counts : " << counts << " )" << std :: endl;
    }

    void ResetCounts()
    {
        counts = 0;
    }

    static int GetCounts() // Declare Static Method
    {
        return counts;
    }
};

int Test :: counts = 0; // Define (Point 01)'s member.

int main(void)
{
    int buffer = 0;

    std :: cout << "* Type Value : ";
    std :: cin >> buffer;

    Test testA(buffer);

    buffer = 0;
    std :: cout << "\n";

    std :: cout << "* Type Value : ";
    std :: cin >> buffer;

    Test testB(buffer);

    std :: cout << "\n";

    std :: cout << "Call Counts:" << std :: endl;
    std :: cout << ">> Counts : " << testA.GetCounts() << std :: endl; // Approach static member

    std :: cout << "\n";

    std :: cout << "Reset Counts:" << std :: endl;
    testB.ResetCounts();

    std :: cout << ">> Counts : " << Test :: GetCounts() << std :: endl; // Possible to approach static member without instance.

    return 0;
}
