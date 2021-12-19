#include <stdio.h>
#include <math.h>

int ngto(int n)
{int i;
    if (n<2) return 0;
    for (i=2;i<=sqrt(n);++i)
    {
        if (n%i==0) return 0;
    }
    return 1;
}

int cuoi(int n){
   int i,m,a;i=n%10;
   while (n!=0){
       if (i<n%10) return 0;
       n/=10;
   } 
   return 1;
}

int main() {
    int i,n;
    scanf ("%d",&n);
    for (i=1;i<=n;++i)
    if (ngto(i) && cuoi(i)) printf ("%d ",i);
    return 0;
}