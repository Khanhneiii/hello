#include <stdio.h>

int check(int a[],int n){
    for (int i=0;i<n;++i)
    if (a[i]!=a[n-1-i]) return 0;
    return 1;
}

int main() {
int n;
scanf("%d",&n);
int a[n];
for (int i=0;i<n;++i)
    scanf("%d",&a[i]);
printf ("%d",check(a,n));
return 0;
}