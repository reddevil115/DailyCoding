#include <iostream>
using namespace std;

class test
{
public:
	test()
	{
		testVal = 5;
		cout << "test()" << endl;
		showTestval();
	}

	~test()
	{
		testVal = 10;
		cout << "~test()" << endl;
		showTestval();
	}

	void showTestval()
	{
		cout << testVal << "\n" << endl;
	}

private:
	int testVal = 0;
};

int main()
{
    test();
}


