/*

< Code Notice >

* This function is not recommendation for use.
* Just for reference.

*/

#include <iostream>

int function(int value = 50)
{
    return value;
}

int main(void)
{
    std :: cout << "[Case 1. If set Parameter]"  << std :: endl;
    std :: cout << "* Value : " << function() << "\n" << std :: endl;

    std :: cout << "[Case 2. If not set Parameter]"  << std :: endl;
    std :: cout << "* Value : " << function(100) << "\n" << std :: endl;

    return 0;
}
