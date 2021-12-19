#include <stdio.h>
#include <math.h>
int main() {
    int t,a,b;
    scanf ("%d",&t);
    while (t--) {
        scanf ("%d%d",&a,&b);
        int l=sqrt(a),r=sqrt(b);
        if (l*l!=a) l++;
        for (int i=l;i<=r;++i)
        printf("%d ",i*i);
        printf("\n");
    }
    return 0;
}