#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{

    printf("before execl\n");
    execl("/bin/ps", "ps", NULL);
    printf("step after execl\n");

    return 0;
}