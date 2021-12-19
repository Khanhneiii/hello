#include <stdio.h>
#include <math.h>

int uoc(int n)
{
    int i,s,a;s=1;
    for (i=2;i<=sqrt(n);++i)
    {
        if (n%i==0) {s+=i;printf ("i=%d ",i);}
        if (i!=(n/i)) {s+=n/i;printf ("%d ",n/i);}
    }
   if (s==n) return 1;
   return 0;

}

int main()
{
    int a,b,i,count;
    scanf ("%d%d",&a,&b);
    for (i=a;i<=b;++i)
    {
        if (uoc(i)) {printf("%d ",i);count=1;}
    }
    if (count == 0) printf ("0");
    return 0;
}
