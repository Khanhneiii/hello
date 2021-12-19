#include <stdio.h>
#include <math.h>

int main(){
    int n, m;
    scanf("%d",&n);
    int a[n][n];
    int h1 = 0, h2 = n - 1, c1 = 0, c2 = n - 1;
    int dem = 1;
    while(h1 <= h2 && c1 <= c2){
    	//xay dung dong tren cung
    	for(int i = c1; i <= c2; i++){
    		a[h1][i] = dem; ++dem;
		}
		++h1;
		//xay dung cot ben phai
		for(int i = h1; i <= h2; i++){
			a[i][c2] = dem; ++dem;
		}
		--c2;
		//xay dung hang duoi cung
		for(int i = c2; i >= c1; i--){
			a[h2][i] = dem; ++dem;
		}
		--h2;
		//xay dung cot ben trai
		for(int i = h2; i >= h1; i--){
			a[i][c1] = dem; ++dem;
		}
		++c1;
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}
