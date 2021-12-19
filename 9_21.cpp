#include <stdio.h>

int tn(int n) {
    int m=n,s=0;
    while (n!=0) {
        s=s*10+n%10;
        if (n%10==9) return 0;
        n/=10;
    }
    if (s==m) return 1;
    return 0;
}

int main() {
    int n,count=0;
    scanf ("%d",&n);
    for (int i=2;i<n;++i){
        if (tn(i)) {printf ("%d ",i);
        count++;
    }
    }
    printf("\n%d",count);
    return 0;
}