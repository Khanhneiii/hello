#include <stdio.h>
#include <math.h>

void insertion_sort(int a[], int n){
	for(int i = 1; i < n; i++){
		int x = a[i] ;
		int vitri = i - 1;
		while(vitri >= 0 && x < a[vitri]){
			a[vitri + 1] = a[vitri];
			--vitri;
		}
		a[vitri + 1] = x;
	}
}

int check(int n){
    if (n<=1) return 0;
    for (int i=2;i<=sqrt(n);++i)
        if (n%i==0) return 0;
        return 1;
}

int main() {
    int n,count=0;
    scanf("%d",&n);
    int a[n],cnt,dem = 0;
    for (int i=0;i<n;++i){
        scanf("%d",&a[i]);
    }
    insertion_sort(a,n);
    for (int i=0;i<n;++i){
        cnt = 1;
        if (check(a[i])){
            dem++;
            while ( i < n && a[i] == a[i+1]){
                cnt++;
                i++;
            }
            printf("%d %d\n",a[i],cnt);
        }
    }
    if (dem == 0) printf ("0");
    return 0;
}