#define _POSIX_C_SOURCE 200809L
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char filename[] = "/tmp/softstack-fileXXXXXX";

    mkstemp(filename);

    puts("antes de abrir el archivo...");
    int fd = open(filename, O_RDWR | _O_CREAT);
    puts("despues de abrir el archivo...");
    close(fd);

    return EXIT_SUCCESS;
}
