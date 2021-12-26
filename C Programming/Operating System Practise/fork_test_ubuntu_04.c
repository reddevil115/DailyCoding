#include <stdio.h>
#include <unistd.h>
#include <wait.h>

int value = 10;

int main(void)
{
    pid_t pid;
    pid = fork();

    if(pid == 0) // child
    {
        value += 100;

        printf("[PID : %d ] Child Value : %d \n", pid, value);
        return 0;
    }

    else if(pid > 0) // parent
    {
        wait(NULL);
        printf("[PID : %d ] Parent Value : %d \n", pid, value);
    }
}
