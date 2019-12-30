#include<stdio.h>
int main()
{
    int n,a[100],i,j;
    scanf("%d", &n);
    i=1;
    while(n!=0)
    {

        a[i]=n%2;
        n=n/2;
        i++;
    }

    for(j=i-1; j>=1; j--)
        printf("%d", a[j]);
    return 0;
}
