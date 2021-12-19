int phi2(int n){
	int res = n;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			while(n % i == 0){
				//printf("%d ",i);
				n /= i;
			}
			res = res - res/i;
		}
	}
	if(n > 1)
		res -= res/n;
	return res;
}

