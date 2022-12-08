#include<stdio.h>
int main()
{
    for(int i=1;i<=7;i++)
    {
        int a=64;
        for(int j=1;j<=13;j++)
        {
            if(j<=8-i)
            {
                a++;
                printf("%c",a);
            }
            else if(i==1)
            {
                a--;
                printf("%c",a);
            }
            else if(j>=6+i)
            {
                printf("%c",a);
                a--;
            }
            else
            {
                    printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}