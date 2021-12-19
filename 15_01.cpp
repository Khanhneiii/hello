#include<stdio.h>
#include<math.h>
#define ll long long

int dem[1000001];

int main (){
	int n, a[1001];
	scanf("%d", &n);
	for(int i = 0; i < n; i++) scanf("%d", &a[i]);
	for(int i = 0; i < n; i++){
		int ok = true;
		//duyet cac phan tu dung truoc i
		for(int j = 0; j < i; j++){
			if(a[i] == a[j]){
				ok = false; break; // da tim thay a[i] xuat hien truoc do
			}
		}
		if(ok) printf("%d ", a[i]);
	}
}
