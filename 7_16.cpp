#include <stdio.h>


int main(){
    int n,i,j,a,m;
    scanf ("%d",&n);m=n;
    for (i=0;i<n;++i){a=0;
        for (j=1;j<=m;++j){
            if (j>=n-i && j<=n) {
                a+=2;
                printf("%d",a-1);
                }
            else if (j>n) {
                a-=2;
                printf("%d",a-1);
            }
          else printf ("~");
           
    }
    ++m;
    printf("\n");

}
return 0;
}