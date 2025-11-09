//Write a program to find the LCM of two numbers//
#include <stdio.h>

int main() {
    int num1, num2, i, hcf, lcm;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    int min = (num1 < num2) ? num1 : num2;

    for (i = 1; i <= min; i++) {
        if (num1 % i == 0 && num2 % i == 0)
            hcf = i;
    }

    lcm = (num1 * num2) / hcf;

    printf("LCM of %d and %d = %d\n", num1, num2, lcm);

    return 0;
}
