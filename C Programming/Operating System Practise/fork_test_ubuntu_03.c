#include <stdio.h>
#include <unistd.h>
#include <wait.h>


int main(void)
{
    pid_t pid;
    pid = fork();

    if(pid > 0)
    {
        wait(NULL);
    }

    printf("[PID : %d] This is a new fork(). \n", pid);

    return 0;
}
