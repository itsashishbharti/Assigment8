#include<stdio.h>
int main()
{
    for (int i=9;i>=1;i--)
    {
         if(i%2!=0)
        {
        for(int k=9;k>=i;k--)
        {
            printf(" ");
        }
    
        for(int j=1;j<=i;j++)
        {
            printf("* ");
        }
            printf("\n");
        }
        
    }
    return 0;
}