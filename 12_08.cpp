#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf ("%d",&n);
    int a[n];
    for(int i=0;i<n;++i)
    scanf("%d",&a[i]);
    int x;
    scanf ("%d",&x);
    int dis=abs(a[0]-x),tmp=a[0];
    for(int i=1;i<n;++i)
    if (abs(a[i]-x) >= dis && a[i]>0) {
        dis = abs(a[i]-x);
        tmp=a[i];
    }
    printf ("%d",tmp);
    return 0;
}