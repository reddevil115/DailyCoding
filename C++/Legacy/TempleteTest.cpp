#include <istream>

template <typename t>	
t add(t a, t b)
{
    return a + b;
}
	
int main(void)
{
	
	std :: cout << add(1,3) << std :: endl;
	std :: cout << add(1.5,3.7) << std :: endl;
	std :: cout << add(8,9) << std :: endl;
	
	return 0;
}
