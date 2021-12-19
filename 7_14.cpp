#include <stdio.h>

int main(){
    int n,i,j,a,b;a=1;b=0;
    scanf ("%d",&n);
    for (i=1;i<=n+1;++i){
        for (j=1;j<=i;++j){
            a+=b;
            printf ("%d ",a);
            b++;
        }
        printf ("\n");
    }
    return 0;
}