#include <stdio.h>

int check(int a[],int n){
    for (int i=0;i<n;++i)
    for (int j=i+1;j<n;++j)
    if (a[j]==a[i]+1 || a[j]==a[i]-1) return 1;
    return 0;
}

int main() {
    int n,cnt=0;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;++i){
        scanf ("%d",&a[i]);
    }
    if (check(a,n)) printf("YES"); else printf("NO");
    return 0;
}