#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
    char file[] = "grades.txt";
    // Open the file "grades.txt"
    // O_WRONLY means open the file only for writing
    // O_CREAT means create the file if it doesn't exit
    // O_TRUNC means truncate the file if it already exists
    // 00600 is the mode which sets file permissions that we will study later
    int file_descriptor = open(file, O_WRONLY | O_CREAT | O_TRUNC, 00600);
    if (file_descriptor < 0)
    {
        fprintf(stderr, "Could not open %s\n", file);
        exit(1);
    }
    close(file_descriptor);
    return 0;
}