#include <stdio.h>

int check(int n){
    int s=0,m=n,cnt=0,num=0;
    while (n!=0) {
        s=s*10+n%10;
        if (n%10 == 5) cnt++;
        num+=n%10;
        n/=10;
    }
    if (m==s && cnt>0 && num%10==3) return 1;
    return 0;
}

int main() {
    int n;
    scanf("%d",&n);
    int cnt = 0;
    for (int i=10;i<=n;++i){
        if (check(i)) {
            printf ("%d ",i);
            cnt++;
        }
    }
    if (cnt == 0) printf ("-1");
    return 0;
}