#include <stdio.h>
#include <math.h>

#define ll long long

//Tinh bac cua thua so nguyen to p trong n ! 
int count(int n, int p){
	int ans = 0;
	for(int i = p; i <= n; i *= p){
		ans += n / i;
	}
	return ans;
}

int nt(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n  % i == 0) return 0;
	}
	return n > 1;
}


ll solve(int n){
	ll ans = 1;
	for(int i = 2; i <= n; i++){
		if(nt(i)){
			ans *= (count(n, i) + 1);
		}
	}
	return ans;
}


int main(){
	int n;
	scanf("%d", &n);
	printf("%lld", solve(n));
}
