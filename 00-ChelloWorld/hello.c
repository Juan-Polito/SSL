
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *filename = "output.txt";

    // open the file for writing
    FILE *fp = fopen(filename, "a");
    if (fp == NULL)
    {
        printf("Error opening the file %s", filename);
        return -1;
    }
    // write to the text file
    fprintf(fp, "Hello World");

    // close the file
    fclose(fp);

    return 0;
}