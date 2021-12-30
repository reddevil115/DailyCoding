#include <stdio.h>
#include <unistd.h>
#include <wait.h>

int main (void)
{
    pid_t pid1;
    pid_t pid2;

    pid1 = fork();

    if(pid1 == 0)
    {
        pid2 = getpid();

        printf("[PID : %d] Child is running... \n" , pid1);
        printf("[PID : %d] Child is running... \n\n" , pid2);
    }

    else if(pid1 > 0)
    {
        pid2 = getpid();

        wait(NULL);

        printf("[PID : %d] Child is NOT running... \n" , pid1);
        printf("[PID : %d] Child is NOT running... \n\n" , pid2);
    }

    return 0;
}
