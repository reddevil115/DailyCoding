#include <stdio.h>
#include <unistd.h>
#include <wait.h>

#define MAX 5

int main (void)
{
    int datas[MAX] = {2, 4, 6, 8, 10};

    pid_t pid;
    int i = 0;

    pid = fork();

    if(pid == 0)
    {
        printf("Child is running... \n\n");

        for(i = 0; i < MAX; i++)
        {
            datas[i] += 1;
            printf("[PID : %d] datas[%d] Value : %d\n", pid, i, datas[i]);
        }

        printf("\n");
    }

    else if(pid > 0)
    {
        wait(NULL);

        printf("Child is NOT running... \n\n");

        for(i = 0; i < MAX; i++)
        {
            printf("[PID : %d] datas[%d] Value : %d\n", pid, i, datas[i]);
        }

        printf("\n");
    }

    return 0;
}
