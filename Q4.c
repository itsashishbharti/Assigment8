#include<stdio.h>
int main()
{
    for(int i=5;i>=1;i--)
    {
        for(int k=1;k<6-i;k++)
        {
            printf("  ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}