#include <stdio.h>
#define MAX 1000

void sum(int a[MAX],int n) {
    int i=0,count=0;
    while (n!=0) {
        a[i] = n%10;
        i++;
        n/=10;
    }
    while (i--)
    if (a[i]%2==0) count+=a[i];
    printf ("%d",count);
}

int main() {
    int n;
    scanf ("%d",&n);
    int a[MAX];
    sum(a,n);
    return 0;
}