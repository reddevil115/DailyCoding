#include <iostream>
using namespace std;

class cppTest
{
public:

	cppTest()
	{
		cout << "Activate Constructor" << endl;;
	}

	~cppTest()
	{
		cout << "Activate Destructor" << endl;
	}
};

int main()
{
	cout << "<< C++ Excercise >>" << endl;
	cppTest cppTest;

	cppTest;

}

