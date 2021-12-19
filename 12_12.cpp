#include <stdio.h>

int check(int n){
    while (n!=0){
        int r=n%10;
        if (r%2==0) return 0;
        n/=10;
    }
    return 1;
}

int main() {
    int n,count=0;
    scanf("%d",&n);
    int a[n],b[100000]={0};
    for (int i=0;i<n;++i){
        scanf("%d",&a[i]);
        if (check(a[i])) {
            b[a[i]]++;
        }
    }
    for (int i=0;i<n;++i)
    if (b[a[i]]!=0){
        printf("%d ",a[i]);
        b[a[i]]=0;
    }
    return 0;
}