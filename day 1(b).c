#include <stdio.h>

int main()
{
    int a,b;
    int sum, difference, product;
    float quotient;
    
    printf("Enter first number\n");
    scanf("%d", &a);

    printf("Enter second number\n ");
    scanf("%d",&b);

    sum = a+b;
    difference = a-b;
    product = a*b;

    if (b!= 0) 
    {
        quotient = (float)a/b; 
        printf("quotient = %.2f\n", quotient);
    }
    else
    {
        printf("division by zero is not  possible");
    }
    
    
    printf("sum = %d\n", sum);
    printf("difference = %d\n", difference);
    printf("product = %d\n", product);

    return 0;
}
