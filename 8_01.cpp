#include <stdio.h>
#include <math.h>

int chia(int n){
    int i,j,count=1;
    for (i=2;i<sqrt(n);++i){
        if (n%i==0){
            count++;
            if (i!=n/i) count ++;
    }
    }
    return count;
}

int main(){
    int n;
    scanf("%d",&n);
    printf("%d ",chia(n));
    return 0;
}