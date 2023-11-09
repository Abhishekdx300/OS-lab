#include <stdio.h>
#include <sys/types.h>

void child()
{
    printf("child-- \n ");
}

void parent()
{
    wait();
    printf("parent-- \n");
}

int main()
{

    pid_t pid;
    pid = fork();

    if (pid == 0)
    {
        child();
    }
    else
    {
        parent();
    }

    return 0;
}