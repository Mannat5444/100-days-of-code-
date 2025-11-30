//A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both//
#include <stdio.h>

int main() {
    FILE *fp;
    int num, count = 0;
    long long sum = 0;   
    float average;

    fp = fopen("numbers.txt", "r");
    
    if (fp == NULL) {
        printf("Error: numbers.txt not found!\n");
        return 1;
    }

    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    if (count > 0)
        average = (float)sum / count;
    else {
        printf("No numbers found in the file.\n");
        fclose(fp);
        return 0;
    }

    printf("Sum = %lld\n", sum);
    printf("Average = %.2f\n", average);

    fclose(fp);

    return 0;
}
