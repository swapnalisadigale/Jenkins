/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n1, n2, sum;
    printf("Enter two numbers\n");
    scanf("%d%d", &n1, &n2);
    sum = n1+n2;
    printf("Sum is %d\n", sum);

    return 0;
}