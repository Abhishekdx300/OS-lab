#include <stdio.h>
#include <sys/types.h>

int main()
{

    pid_t pid;
    pid = fork();

    if (pid == 0)
    {
        printf("child-- %d \n ", pid);
    }
    else
    {
        printf("parent-- %d\n", pid);
    }

    return 0;
}