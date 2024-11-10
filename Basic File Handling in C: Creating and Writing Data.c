#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>  

char data[] = "Hello suvani!";

ssize_t createFile()
{
    ssize_t create = open("data.txt", O_CREAT | O_WRONLY | O_TRUNC, 0644);
    if (create == -1)
    {
        perror("Error while making a file !");
        return -1;
    }
    return create;
}

int main()
{
    int fd = createFile();
    if (fd == -1)
    {
        return 1;
    }

    ssize_t writing_on_File = write(fd, data, sizeof(data) - 1);
    if (writing_on_File == -1)
    {
        perror("(+) Error Occured ! Could not write !");
        close(fd);
        return 1;
    }

    close(fd);
    return 0;
}
