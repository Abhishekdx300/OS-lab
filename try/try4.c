#include <stdlib.h>
#include <errno.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
main()
{
    pid_t pid;
    int rv;
    switch (pid = fork())
    {
    case -1:
        perror("fork()");
        exit(1);

    case 0:
        printf("\n CHILD: This is child process\n");
        fflush(stdout);
        printf("\n CHILD: My PID is %d\n ", getpid());
        printf("\n CHILD: My parent's PID is %d\n ", getppid());
        printf("\n CHILD: Enter my exit status(make it small): \n ");
        scanf("%d", &rv);
        printf("\n CHILD:I am outta here \n");
        exit(rv);

    default:
        printf("\n PARENT: This is parent process\n");
        printf("\n PARENT: My PID is %d\n ", getpid());
        fflush(stdout);
        wait(&rv);
        fflush(stdout);
        printf("\n PARENT: My child's PID is %d\n ", pid);
        printf("\n PARENT: I am now waiting for my child to exit... \n ");
        fflush(stdout);
        printf("\n PARENT: My child's exit status is %d\n ", rv);
        WEXITSTATUS(rv);
        printf("\n PARENT:I am outta here \n");
    }
}