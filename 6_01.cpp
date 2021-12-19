#include <stdio.h>

int main() {
    int a,b,n,i,j,m;
    scanf("%d%d",&a,&b);
    for (i=1;i<=a;++i){
        for (j=1;j<i;++j){
            printf("~");
        }
        for (n=1;n<=b;++n){
        if (i==1 || i==a || n==1 || n==b) printf("*");
         else printf (".");
        }
    printf("\n");
};
return 0;
}
