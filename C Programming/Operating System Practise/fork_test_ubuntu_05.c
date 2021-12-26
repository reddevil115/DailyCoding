#include <stdio.h>
#include <unistd.h>
#include <wait.h>

int main(void)
{
    //1 fork create 2 processes.
    fork();
    fork();
    fork();

    printf("Hello, fork()!! \n");

    return 0;
}
