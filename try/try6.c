#include <stdio.h>
#include <dirent.h>
#include <errno.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    DIR *dirp;
    struct dirent *direntp;

    if (argc != 2)
    {
        printf("output:\n");
        printf("usage: %s directory name\n", argv[0]);
        return 1;
    }

    dirp = opendir(argv[1]); // Use argv[1] instead of argv[i]
    if (dirp == NULL)
    {
        perror("failed to open directory");
        return 1;
    }

    while ((direntp = readdir(dirp)) != NULL)
    {
        printf("%s\n", direntp->d_name);
    }

    if ((closedir(dirp) == -1) && (errno == EINTR))
    {
        perror("failed to close directory");
        return 1;
    }

    return 0;
}