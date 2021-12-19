int prime[n + 1];

void sang(){
	//Ban dau coi tat cac cac so tu 0 => n deu la snt
	for(int i = 0; i <= n; i++){
		prime[i] = 1;
	}
	// loai so 0, 1
	prime[0] = prime[1] = 0;
	//Duyet tu 2 => sqrt(n)
	for(int i = 2; i <= sqrt(n); i++){
		//Neu i la so nguyen to
		if(prime[i] == 1){
			//Loai cac boi cua i <= n
			for(int j = i * i; j <= n; j += i){
				prime[j] = 0;
			}
		}
	}
}
