#include <stdio.h>
#include <math.h>
int main()
{
    int F, M, S;
    printf("Enter the father's age:");
    scanf("%d",&F);
    S=(F-5)/3;
    M=3*S;
    printf("The son's age is:%d\n",S);
    printf("The mother's age is:%d",M);
    return 0;
}