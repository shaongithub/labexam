#include<stdio.h>
int main()
{
    int m;
    scanf("%d", &m);
    switch(m/10)
    {
    case 10:
    case 9:
    case 8:
        printf("A+");
        break;
    case 7:
        printf("A");
        break;
    case 6:
        printf("A-");
    case 5:
        printf("B");
        break;
    case 4:
        printf("C");
        break;
    case 3:
        if(m>=33 && m<=39)
            printf("D");
        else
            printf("F");
        break;
    }
    return 0;
}
