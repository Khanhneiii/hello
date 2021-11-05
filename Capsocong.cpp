#include <stdio.h>

int main()
{ int i;
long long n,s;
scanf ("%d",&n);
s=0;
for (i=1;i<=n;i++) {s=s+i;}
printf("%lld",s);
return 0;
}
