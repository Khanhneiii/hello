#include <stdio.h>

int main(){
    int n,f0=0,f1=1,fn;
    scanf("%d",&n);
    printf ("0 1 ");
    for (int i=2;i<n;++i){
        fn=f0+f1;
        printf("%d ",fn);
        f0=f1;
        f1=fn;
    }
    return 0;
}