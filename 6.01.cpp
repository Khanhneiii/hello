#include <stdio.h>

int main() {
    int a,b,n,i,j,m;
    scanf("%d%d",&a,&b);
    for (i=1;i=b;++i){
        for (j=1;i<j;++i){
            printf("~");
        }
        if (i==1 || i==b) 
        for (n=1;n<=a;++n){
            if (i==1 || i==b) printf("*");
            else {if (n==1 || n==a) printf("*"); else printf ("."); 
        }
        printf("\n");

    }
}
return 0;
}