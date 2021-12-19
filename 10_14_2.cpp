#include <stdio.h>
#include <math.h>

int main() {
    int n,count=0;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;++i)
    scanf ("%d",&a[i]);
    long long max =-10e9 - 1;
    for (int i=0;i<n;++i)
    if (a[i]>max) max = a[i];
    printf ("%d",max);
    return 0;
}