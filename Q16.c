#include<stdio.h>
int main()
{
    for(int i=1;i<10;i=i+2)
    {
        for(int k=10-i;k>=1;k=k-2)
        {
            printf("  ");
        }
        for(int j=1;j<=i;j++)
        {
            if(j==1 || j==i || i==9)
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