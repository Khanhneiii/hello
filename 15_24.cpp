#include <stdio.h>

void bubble_sort(int a[],int n){
    int i;
    for (i=0;i<n-1;++i){
        for (int j=0;j<n-i-1;++j){
            if(a[j] > a[j+1]){
				int tmp = a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;
            }
        }
    }
    for (i=0;i<n;++i)
            printf("%d ",a[i]);
}

int main() {
    int n;
    scanf("%d",&n);
    int i;
    int a[n];
    for (i=0;i<n;++i)
        scanf("%d",&a[i]);
    bubble_sort(a,n);
}