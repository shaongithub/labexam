#include<stdio.h>
int main()
{
    //int a[3][3]={{1,2.3},{4,5,6},{7,8,9}};
    //printf("%d", a[2][2]);
    int a[10][10], b[10][10], c[10][10],i,j;
    for(i=1; i<=3; i++)
        for(j=1; j<=3; j++)
        scanf("%d", &a[i][j], &b[i][j]);
    for(i=i; i<=3; i++)
    {
        for(j=1; j<=3; j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%d", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
