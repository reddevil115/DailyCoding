#include <istream>
using namespace std;

class ClassTest
{
	public:
	ClassTest()
	{
		classVal = 10;
	}
	
	void show()
	{
		cout << classVal << endl;
	}
	
	protected:
	int classVal;
};

int main(void)
{
	ClassTest t;
	t.show();
}
