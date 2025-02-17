#include <fcntl.h>
#include <unistd.h>

int main() {
    int fd = open("example.txt", O_WRONLY | O_CREAT, 0777);

    if (fd != -1) {
        lseek(fd, 4, SEEK_SET);  // Move the cursor to the 4th position
        write(fd, "hello", 5);  // Write "hello"

        close(fd);
    }

    return 0;
}
