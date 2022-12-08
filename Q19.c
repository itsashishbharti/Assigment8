#include<stdio.h>
int main()
{
        int p=5,o=0;
    for(int i=1;i<=3;i++)
    {
        for(int k=4-i;k>=1;k--)
        {
            printf(" ");
        }
        for(int j=1;j<=p;j++)
        {
            printf("* ");
        }
        for(int k=11-o;k>=1;k=k-2)
        {
            printf("  ");
        }
        for(int j=1;j<=p;j++)
        {
            printf("* ");
        }
        p=p+2;
        o=o+5;
        printf("\n\n");
    }
    for(int i=19;i>=1;i=i-2)
    {
        for(int k=20-i;k>=1;k--)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n\n");
    }
    return 0;
}