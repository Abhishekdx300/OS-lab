#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>

int main()
{
    pid_t pid;
    pid = fork();
    if (pid > 0)
    {
        printf("parent\n");
        sleep(5);
    }
    else
    {
        printf("child\n");
        exit(0);
    }
    return 0;
}