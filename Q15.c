#include<stdio.h>
int main()
{
    int p=0,o=4;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(j==4)
            {
            printf("* ");
            }
            else if(i==4)
            {
                printf("* ");
            }
            else if(i==p && j==o)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        p++;
        o--;
        printf("\n");
    }
    return 0;
}