

int main() {
    int n,dau,cuoi,so,a,b;a=0;b=1;
    scanf ("%d",&n);cuoi=n%10;n-=cuoi;a=n;
    while (n>=10) {
       b*=10;
    n/=10;
	    };
	    a-=n*b;
	    a+=n+cuoi*b;
    printf("%d",a);
    return 0;
}
