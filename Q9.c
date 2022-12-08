#include<stdio.h>
int main()
{
    int c=0;
    for(int i=7;i>=1;i--)
    {
        int b=i/2+1;
        int p=2;
        c++;
        if(i%2!=0)
        {
            for(int k=1;k<=c;k++)
            {
                printf(" ");
            }
            for(int j=1;j<=i;j++)
            {
                if(j>b)
                {
                    printf("%d ",j-p);
                   p= p+2;
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