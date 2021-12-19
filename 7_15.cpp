#include <stdio.h>


int main(){
    int n,i,j,a,m;
    scanf ("%d",&n);m=1;
    for (i=0;i<n;++i){a=0;
        for (j=1;j<=m;++j){
            if (j<=m/2+1){a+=2;printf("%d",a);}
            else {
                a-=2;printf("%d",a);
            }
        }
       m+=2;    
    printf("\n");
    }
return 0;
}