#include<stdio.h>
int main()
{
    for(int i=1;i<=9;i++)
    {
         if(i%2!=0)
        {
        for(int k=1;k<=9-i;k++)
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