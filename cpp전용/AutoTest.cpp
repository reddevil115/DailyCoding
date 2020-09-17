#include <istream>

int main()
{
	
	int numbers[6] = {1,2,3,4,5,6};
	
	for(auto n : numbers)
	{
		std::cout << n << "\t";
	}
	
	return 0;
}
