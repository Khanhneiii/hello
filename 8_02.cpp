#include <stdio.h>
#include <math.h>

int main(){
	int t;
	scanf("%d", &t);
	for(int i = 0; i < t; i++){
		int a, b, c, n;
		scanf("%d%d%d%d", &a, &b, &c, &n);
		if((a + b + c + n) % 3 == 0){
			int x = (a + b + c +n)/3;
			if(x >= a && x >= b && x >= c){
				printf("YES\n");
			}else printf("NO\n");
		}else{
			printf("NO\n");
		}
	}
}
