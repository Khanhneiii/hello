#include <stdio.h>
#include <math.h>
int check(int n){
    if (n < 10) return 0;
    int s=0,m=n;
    while (n!=0) {
        s=s*10+n%10;
        n/=10;
    }
    return (m==s);
}

int main() {
    int n,cnt = 0;
    scanf ("%d",&n);
        int a[n];
        for (int i=0;i<n;++i){
        scanf ("%d",&a[i]);
        if (check(a[i])) cnt++;
        }
        printf("%d ",cnt);
    for (int i=0;i<n;++i){
        if (check(a[i])) {
            printf("%d ",a[i]);
    }
    }
    return 0;
}