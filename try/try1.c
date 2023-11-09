#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
int main()
{
    int i, pid;
    pid = fork();
    if (pid == -1)
    {
        printf("fork failed");
        exit(0);
    }

    else if (pid == 0)
    {
        printf("\n Child process starts");
        for (i = 0; i < 5; i++)
        {
            printf("\n child process  %d is called:", i);
        }
        printf("\n child process ends");
    }
    else
    {
        wait(0);
        printf("\n Parent process ends");
    }
    exit(0);
}