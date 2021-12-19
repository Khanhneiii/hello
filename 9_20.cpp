#include <stdio.h>
#include <math.h>

int arms(int n) {
    int m=n,count=0,sum=0,r=n;
    while (n!=0) {
        count++;
        n/=10;
    }
    while (m!=0){
        sum+=pow(m%10,count);
        m/=10;
    }
    if (r==sum) return 1; else return 0;
}

int main() {
    int n;
    scanf("%d",&n);
    printf("%d",arms(n));
    return 0;
}