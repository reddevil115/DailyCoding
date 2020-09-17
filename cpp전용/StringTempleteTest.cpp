#include <istream>
using namespace std;

template <typename t>

t buffer(t a)
{
	return a;
}

int main(void)
{
	auto b = 0;
	cout << "Input: ";
	cin >> b;   
	cout << "Output: " << buffer(b);
}
