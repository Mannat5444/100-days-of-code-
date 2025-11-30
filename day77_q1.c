//Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt//
#include <stdio.h>
#include <ctype.h> // for toupper()

int main() {
    FILE *fin, *fout;
    char ch;

    fin = fopen("input.txt", "r");
    if (fin == NULL) {
        printf("Error: input.txt not found!\n");
        return 1;
    }

    fout = fopen("output.txt", "w");
    if (fout == NULL) {
        printf("Error: Unable to create output.txt!\n");
        fclose(fin);
        return 1;
    }

    while ((ch = fgetc(fin)) != EOF) {
        ch = toupper(ch);
        fputc(ch, fout);
    }

    printf("Conversion successful! Check output.txt\n");

    fclose(fin);
    fclose(fout);

    return 0;
}
