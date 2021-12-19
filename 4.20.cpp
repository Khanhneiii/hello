#include <stdio.h>

#include <math.h>
void pt(int n){
	for(int i = 2; i <= sqrt(n); i++){
		//neu ma n chia het cho i
		if (n%i==0){	//Lay n chia cho i cho toi khi n khong chia het cho thi thoi
			while(n % i == 0){
				n /= i;
			}
			printf("%d ",i);
		}
	
	}
	if(n != 1) printf("%d", n);
}
//Phan tich thua so nguyen to
int main () {
	int n;
	scanf ("%d",&n);
	pt(n);
	return 0;
}
