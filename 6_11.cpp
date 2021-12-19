#include <stdio.h>

int main() {
        int n,i,j,a,b;
        scanf ("%d",&n);a=n;
        for (i=1;i<=n;++i){b=i;
        while (b>1) {printf ("%d ",b);b--;};
        for (j=1;j<=a;++j){printf("%d ",j);}
        --a;printf("\n");}
        return 0;
}
