#include <stdio.h>
#include <math.h>

int check(int n) {
    int i=sqrt(n);
    if (i*i == n) return 1;
    return 0;
}

int main() {
    int t,a,b;
    scanf("%d",&t);
    for (int i=1;i<=t;++i) {
        int count = 0;
        scanf("%d%d",&a,&b);
        for(int i=a;i<=b;++i)
            if (check(i)) count++;
        printf ("%d\n",count);
    }
    return 0;
}