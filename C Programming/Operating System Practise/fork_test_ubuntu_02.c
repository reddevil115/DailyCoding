#include <stdio.h>
#include <unistd.h>

int main(void)
{
    pid_t pid;
    pid = fork();

    printf("Fork Test , PID : %d\n", pid);

    return 0;
}
