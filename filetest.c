#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
int main() {
    char * content = malloc(256 * sizeof(char));
    char * copied = malloc(256 * sizeof(char));

    int file0 = open("file0.txt", O_RDONLY);
    if (file0 > 0) printf("File0 opened successfully.\n");
    else printf("File0 not succesfully opened.\n");

    int file1 = open("file1.txt", O_WRONLY);
    if (file1 > 0) printf("File1 opened successfully.\n");
    else printf("File1 not succesfully opened.\n");

    if (read(file0,content,256) < 0) printf("Read failed frome file0 \n");
    else printf("Read success from file0 \n");

    printf("Printing first 15 bytes read from file0 \n");
    for(int x= 0; x < 15; x++){
      printf("%c",content[x]);
    }
    printf("\n");

    if (write(file1,content,10) < 0)printf("Writing in file1 failed with 10 bytes \n");
    else printf("Writing to file1 succeeeded with 10 bytes written \n");


    printf("File0 closing...\n");
    close(file0);
    printf("Done!\n");
    printf("File1 closing...\n");
    close(file1);
    printf("Done!\n");
    return 0;
}
