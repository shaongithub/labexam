#include<stdio.h>
int main()
{
    int i=0;
    char a[20], b[20];

    gets(a);
    gets(b);
    while(a[i]==b[i] && a[i]!='\0' && b[i]!='\0')
        i++;
    if(a[i]==b[i])
    printf("Same");
    else
    printf("Not Same");

    return 0;

}
