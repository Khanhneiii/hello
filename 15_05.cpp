#include <stdio.h>


int main(){
    int n;
    scanf("%d", &n);
    int a[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &a[i][j]);
        }
    }
    //duyet tung cot
    for(int i = 0; i < n; i++){
    	// sap xep cot i
    	for(int j = 0; j < n; j++){
    		int min = j;
    		for(int k = j + 1; k < n; k++){
    			if(a[k][i] < a[min][i]){
    				min = k;
				}
			}
			int tmp = a[min][i];
			a[min][i] = a[j][i];
			a[j][i] = tmp;
		}
	}
	for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
