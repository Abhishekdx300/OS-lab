#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
int main()
{
    pid_t pid;
    pid = fork();
    if (pid > 0)
    {
        printf("parent\n");
        sleep(5);
        printf("again parent\n");
    }
    else if (pid == 0)
    {
        printf("child\n");
    }
    return 0;
}