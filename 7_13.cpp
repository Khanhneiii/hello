#include <stdio.h>

int main(){
    int n,i,j,a,m;
    scanf ("%d",&n);a=0;
    for (i=1;i<=n;++i){
        if (i%2!=0) {a++;} else {a+=i;}
        m=a;printf("%d ",a);
        for (j=2;j<=i;j++){
            if (i%2!=0) {a++;printf("%d ",a);} else {m--;printf("%d ",m);}
        }
        printf("\n");
    }
    return 0;
}