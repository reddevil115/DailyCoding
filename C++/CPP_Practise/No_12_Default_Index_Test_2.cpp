/*

< Code Notice >

* This function is not recommendation for use.
* Just for reference.

*/

int function(int = 50);


#include <iostream>

int main(void)
{
    std :: cout << "[Case 1. If set Parameter]"  << std :: endl;
    std :: cout << "* Value : " << function() << "\n" << std :: endl;

    std :: cout << "[Case 2. If not set Parameter]"  << std :: endl;
    std :: cout << "* Value : " << function(100) << "\n" << std :: endl;

    return 0;
}

int function(int value)
{
    return value;
}
