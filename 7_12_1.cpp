#include <stdio.h>

/*void in(int n,int i,int j,int a,int m){
     if (j>=n-i && j<=n) {
                a+=2;
                printf("%d",a);
                }
            else if (j>n) {
                a-=2;
                printf("%d",a);
            }
            else printf ("~");

}*/

int main(){
    int n,i,j,a,m;
    scanf ("%d",&n);m=n;
    for (i=0;i<n;++i){a=0;
        for (j=1;j<=m;++j){
            if (j>=n-i && j<=n) {
                a+=2;
                printf("%d",a);
                }
            else if (j>n) {
                a-=2;
                printf("%d",a);
            }
            else printf ("~");
           
    }
    ++m;
    printf("\n");

}
return 0;
}