#include <stdio.h>

void top(int n){
    for (int i=0;i<n;++i){
        for (int j=0;j<n;++j){
            if (j==n-1 || j==i || j==0) printf("*");
            else printf ("~");
        }
        printf ("\n");
    }
}

void bottom(int n){
    for (int i=1;i<n;++i){
        for (int j=1;j<=n;++j){
            if (j==1 || j==n || j==n-i) printf("*");
            else printf("~");
        }
        printf ("\n");
        }
}
int main() {
    int n;
    scanf("%d",&n);
    top(n);
    bottom(n);
    return 0;
}