#include <stdio.h>

int main()
{
    int p, q;
    int sum, sub, mul, mod;
    float div;

    /* Input two numbers from user */
    printf("Enter any two numbers::\n");
    scanf("%d%d", &p, &q, "\n");

    /* Perform all arithmetic operations */ 
    sum = p + q;
    sub = p - q;
    mul = p * q;
    div = (float)p / q;
    mod = p % q;

    /* Print result of all arithmetic operations */
    printf("\n");
    printf("SUM        %d + %d = %d\n", p, q, sum);
    printf("DIFFERENCE %d - %d = %d\n", p, q, sub);
    printf("PRODUCT    %d * %d = %d\n", p, q, mul);
    printf("QUOTIENT   %d / %d = %f\n", p, q, div);
    printf("MODULUS    %d %% %d = %d\n", p, q, mod);

    return 0;
}
