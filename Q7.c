#include<stdio.h>
int main()
{
  for(int i=0;i<5;i++)
  {
    for(int j=5;j>i;j--)
    {
        printf("* ");
    }
    for(int k=0;k<5;k++)
    {
         if(k<i)
           {
               printf("    ");
           }
           else
           {
               printf("* ");
           }
    }
    printf("\n");
  }

    return 0;
}