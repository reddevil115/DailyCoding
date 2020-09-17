#include <istream>
using namespace std;

class Test
{
    public:
    Test()
    {
    	cout << "Created" << endl;
    }
	
    ~Test()
    {
    	cout << "Deleted" << endl;
    }
};

int main(void)
{
	Test t;
	cout << "Running" << endl;
}