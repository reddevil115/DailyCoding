#include <stdio.h>
#include <unistd.h>
#include <wait.h>

int main (void)
{
    pid_t pid;
    pid = fork();

    if(pid == 0)
    {
        printf("Child is running... \n");
    }

    else if(pid > 0)
    {
        wait(NULL);
        printf("Child is finished ! \n");
    }

    return 0;
}
