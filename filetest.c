#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
    int file0 = open("file0.txt", O_RDONLY);
    if (file0 > 0) printf("File0 opened successfully.\n");
    else printf("File0 not succesfully opened.\n");
    
    int file1 = open("file1.txt", O_WRONLY);
    if (file1 > 0) printf("File1 opened successfully.\n");
    else printf("File1 not succesfully opened.\n");
    

    printf("File0 closing...\n");
    close(file0);
    printf("Done!\n");    
    printf("File1 closing...\n");
    close(file1);
    printf("Done!\n");
    return 0;
}
