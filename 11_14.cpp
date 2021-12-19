#include <stdio.h>
#define MAX 100000


int main() {
    int n;
    scanf ("%d",&n);
    long long a[n];
    int count[10000]={0};
    for (int i=0;i<n;++i){
    scanf ("%lld",&a[i]);
    count[a[i]]++;
    }
    long long max=-10e9-1;
    int tmp;
    for (int i=0;i<n;++i){
        if (count[a[i]]>max && count[a[i]]!=0) {
            max=count[a[i]];
            tmp=a[i];
    }
    }
    printf("%d %d",tmp,count[tmp]);

    return 0;
}
