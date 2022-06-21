#include <stdio.h>
#include <unistd.h>

int main(void)
{
    int i;

    for(i = 0; i < 5; i++)
    {
        fork();
    }

    printf("Hello,  fork() !! \n");

    return 0;
}
