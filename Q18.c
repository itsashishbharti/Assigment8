 #include<stdio.h>
int main()
{
    for(int i=1;i<10;i=i+2)
    {
        for(int k=10-i;k>=1;k=k-2)
        {
            printf("  ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n\n");
    }
        for(int i=1;i<=7;i=i+2)
        {
            for(int k=1;k<=i+2;k++)
            {
                printf(" ");
            }
            for(int j=7;j>=i;j--)
            {
                printf(" *");
            }
            printf("\n\n");
        }
    return 0;
}