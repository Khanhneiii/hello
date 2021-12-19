#include <stdio.h>

int main(){
    long long n,fb,f1=1,f0=0;
    int t,tmp;
    scanf("%d",&t);
    for (int i=1;i<=t;++i){tmp=0;f0=0;f1=1;
        scanf("%lld",&n);
        if (n==1 || n==0) printf ("YES\n"); else {
        for (int j=2;j<=93;++j){
            fb=f1+f0;
            if (fb==n) {tmp=1;break;}
            f0=f1;
            f1=fb;    
        }
        if (tmp==1) printf ("YES\n"); else printf("NO\n");
        }
    }
    return 0;
    
}