#include <stdio.h>

int main()
{
    int j,n,i,a,b;
    scanf ("%d",&n);a=1;
    for (i=1;i<=n;++i){
        if (i%2!=0) a=1;
         if (i%2==0) a=0;
        for (j=1;j<=n;++j){
            printf ("%d",a);
            if (a==0) a++; else a--;
        
        }
        printf ("\n");
    }
    return 0;
}