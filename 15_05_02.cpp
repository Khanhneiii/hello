#include<stdio.h>
#include<math.h>

void sx(int a[], int n){
	for(int i = 0; i < n; i++){
		int min = i;
		for(int j = i + 1; j < n; j++){
			if(a[min] > a[j]) min = j;
		}
		int tmp = a[min];
		a[min] = a[i];
		a[i] = tmp;
	}
}

int main(){
    int n;
    scanf("%d", &n);
    int a[n][n], b[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &a[i][j]);
            b[j][i] = a[i][j];
        }
    }
	for(int i = 0; i < n; i++){
		sx(b[i], n);
	}
	for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d ",b[j][i]);
        }
        printf("\n");
    }
}
