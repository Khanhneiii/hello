#included <stdio.h>

int main(){
	int n,a,b,c;c=0;
	scanf("%d",&n);
	for (int i=1;i<=n;i++) {
		scanf ("%d%d",&a,&b);
		if (a>b) {c++;}
		else if (a<b) c--;
	}
	if (c>0) printf("Mishka")
	else if (c<0) printf ("Chris")
	else if (c==0) printf ("Friendship is magic! ^^");
	return 0;
}
