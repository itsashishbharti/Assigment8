#include<stdio.h>
int main()
{
    for(int i=9;i>=1;i=i-2)
    {
        for(int k=10-i;k>=1;k--)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            if(i==9)
            {
            printf("* ");
            }
            else if(j==1 ||j==i)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n\n");
    }
    return 0;
}