#include<stdio.h>
int main()
{
    int z=0;
    for(int i=7;i>=1;i=i-2)
    {
        int a=64;
        int p=i/2;
        for(int k=0;k<=z;k++)
            {
                printf("  ");
            }
        for(int j=1;j<=i;j++)
        {
    
            if(j<=p+1)
            {
                 a++;
                 printf("%c ",a);
            }
            else
            {
                a=a-1;
                printf("%c ",a);
            }
        }
        z++;
        printf("\n");
    }
    return 0;
}