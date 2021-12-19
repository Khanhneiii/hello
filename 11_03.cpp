#include <stdio.h>

int check(int n){
    int m=n,s=0;
    while (n!=0){
        s=s*10+n%10;
        n/=10;
    }
    if (s==m) return 1;
    return 0;
}

int main() {
    int n;
    scanf ("%d",&n);
    int a[n],b[n],j=0;
    for (int i=0;i<n;++i){
    scanf ("%d",&a[i]);
    if (check(a[i])) {b[j]=a[i];
    j++;
    }
    }
    printf ("%d\n",j);
    for (int i=0;i<j;++i)
    printf ("%d ",b[i]);
    return 0;
}