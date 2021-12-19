#include <stdio.h> 


int main(){
    int n,i,j,a=0,m;
    scanf ("%d",&n);
    for(i=0;i<2*n-1;++i){
        for (j=0;j<2*n-1;++j){
                if (j<=n){
                if (j>i) printf("%d",n-i); else printf("%d",n-j); 
            }
            else {
                if (j<2*n-i) printf("%d",n-i); else printf("%d",3*n-j-2);
            }
        }
        printf("\n");
    }
    return 0;
}