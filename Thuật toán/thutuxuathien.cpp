#include<stdio.h>
int cnt[1000000] = {0};

int main() {
	int n;
	scanf("%d",&n);
	int a[n], max = -1e9;
	for (int i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(int i = 0; i < n; i++){
		if(a[i] > max) max = a[i];
		cnt[a[i]]++;
	}
	for(int i = 0; i < max; i++){
		if(cnt[i]) printf("%d %d\n", i, cnt[i]);
	}
	return 0;
}
