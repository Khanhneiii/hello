#include <stdio.h>
#include <math.h>

int nt(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return false;
	}
	return n > 1;
}


int main(){
	int n;
	scanf("%d", &n);
	int a[n][n];
	//can n*n so nguyen to dau tien
	int prime[n * n];
	int i = 0, cnt = 0;
	while(cnt < n*n){
		if(nt(i)){
			prime[cnt] = i; ++cnt;
		}
		++i;
	}
	int h1 = 0, h2 = n - 1, c1 = 0, c2 = n - 1;
	int dem = 0;
	while(h1 <= h2 && c1 <= c2){
		for(int i = c1; i <= c2; i++){
			a[h1][i] = prime[dem]; ++dem;
		}
		++h1;
		for(int i = h1; i <= h2; i++){
			a[i][c2] = prime[dem]; ++dem;
		}
		--c2;
		for(int i = c2; i >= c1; i--){
			a[h2][i] = prime[dem]; ++dem;
		}
		--h2;
		for(int i = h2; i >= h1; i--){
			a[i][c1] = prime[dem]; ++dem;
		}
		++c1;
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
