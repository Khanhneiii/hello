#include <stdio.h>

int min(int a,int b){
    if (a>b) return b; else return a;
}

 long long gt(int a){
     int giai=1;
        if (a<=1) return 1;
        for (int i=2;i<=a;++i){
            giai*=i;
        }
        return giai;
    }

    int main() {
        int a,b;
        scanf ("%d%d",&a,&b);
        printf ("%lld",gt(min(a,b)));
    return 0;
    }