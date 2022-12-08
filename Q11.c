#include<stdio.h>
int main()
{
                int c=0,j=5;
    for(int x=1;x<=9;x++)
    {
        
            if( x%2!=0)
            {
                int a=64;
                for(int k=j;k>=1;k--)
                {
                    printf("  ");
                }
                     for(int y=1;y<=x;y++)
                     { 
                         if(y<=x-c)
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
                     j--;
                        c++;
                     printf("\n");
            }
    }
    return 0;
}