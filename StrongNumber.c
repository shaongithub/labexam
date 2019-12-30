#include <stdio.h>

int main() {
  int a[100],b[100],i,j,k,n,cnt,fact=0,m=1,x;

scanf("%d", &n);
x=n;
cnt=0;
while(n!=0)
{
  a[cnt]=n%10;
  n=n/10;
  cnt++;
}

for(i=0; i<cnt; i++){
  for(j=1; j<=a[i]; j++){
  m=m*j;
  }
  b[i]=m;
  m=1;
}
  for(k=0; k<cnt; k++)
  fact=fact+b[k];

  if(fact==x)
    printf("%d is Strong Number", x);
  else
    printf("%d is not Strong Number", x);

  return 0;
}
