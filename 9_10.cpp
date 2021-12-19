#include <stdio.h>
#include <math.h>

int m;


int KtraSoNT(int m) {
    if (m < 2) return 0;
    for (int i = 2; i <= sqrt(m); i++){
        if (m % i == 0) return 0;
    }
    return 1;
}

int KtraTang(int m){
    int test = (m % 10);
    m /= 10;
    while (m != 0){
        if ((m%10) >= test) return 0;
        test = (m % 10);
        m /= 10;
    }
    return 1;
}

int KtraGiam(int m){
    int test = (m % 10);
    m /= 10;
    while (m != 0){
        if ((m%10) <= test) return 0;
        test = (m % 10);
        m /= 10;
    }
    return 1;
}

int main(){
    int n, j, d = 0;
        scanf("%d", &n); // So chu so
        for (int i= pow(10,n-1); i <= (pow(10,n) - 1); i++){
            j = i;
            if ( KtraSoNT(i) && (KtraTang(i) || KtraGiam(j)) ) d += 1;
        }
        printf("%d", d);
        return 0;
}