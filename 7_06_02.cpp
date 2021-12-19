#include <stdio.h>

int main(){
    int n;
        scanf("%d", &n);
        //Cac dong tren
        for (int i = n; i >= 2; i--){
            for (int j = n; j >= (i+1); j--) printf("%d", j);
            for (int j = 1; j <= (i*2 - 1); j++) printf("%d", i);
            for (int j = (i+1); j <= n; j++) printf("%d", j);
            printf("\n");
        }
        //Dong giua
        for (int i = n; i >= 2; i--) printf("%d", i);
        printf("1");
        for (int i = 2; i <= n; i++) printf("%d", i);
        printf("\n");
        //Cac dong duoi
        for (int i = 2; i <= n; i++){
            for (int j = n; j >= (i+1); j--) printf("%d", j);
            for (int j = 1; j <= (i*2 - 1); j++) printf("%d", i);
            for (int j = (i+1); j <= n; j++) printf("%d", j);
            printf("\n");
        }
        return 0;
}