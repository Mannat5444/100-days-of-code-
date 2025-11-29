//Find the digit that occurs the most times in an integer number.//
#include <stdio.h>

int main() {
    long long num;
    int digitCount[10] = {0};
    int digit, maxDigit = 0, i;
    
    printf("Enter a number: ");
    scanf("%lld", &num);

    long long temp = num;

    
    while (temp != 0) {
        digit = temp % 10;
        digitCount[digit]++;
        temp /= 10;
    }

   
    int maxFreq = digitCount[0];
    for (i = 1; i < 10; i++) {
        if (digitCount[i] > maxFreq) {
            maxFreq = digitCount[i];
            maxDigit = i;
        }
    }

    printf("Digit that occurs the most: %d\n", maxDigit);
    printf("Frequency: %d times\n", maxFreq);

    return 0;
}
