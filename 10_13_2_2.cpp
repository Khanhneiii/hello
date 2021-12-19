#include <stdio.h>
#include <math.h>

int main() {
    int n,count=0;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;++i)
    scanf ("%d",&a[i]);
    for (int i=0;i<n;++i)
    if (a[i]>=0) count++ ;
    if (count == 0) printf ("1");
    else printf ("0");
    return 0;
}