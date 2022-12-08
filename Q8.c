#include<stdio.h>
int main()
{
    int c=0,temp;
    for (int i=1;i<=7;i++)
    {
        int p=2;
         if(i%2!=0)
        {
            c++;
        for(int k=1;k<=7-i;k++)
        {
            printf(" ");
        }
    
        for(int j=1;j<=i;j++)
        {
            if(j>c)
            {
                 printf("%d ",j-p);
                p=p+2;

            }
            else
            {
                 printf("%d ",j);
            }
        }
            printf("\n");
        }
        
    }
    return 0;
}