#include <stdio.h>

int main() {
    int n,i,odd=0,even=0;
    scanf("%d",&n);
    while (n!=0) {
        int r=n%10;
        if(r%2==0) even++; else odd++;
        n/=10;
    }
    printf ("%d %d ",odd,even);
    return 0;
}