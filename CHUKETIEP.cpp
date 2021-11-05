#include <stdio.h>

int main() {
    char c;
    scanf("%c",&c);
    if (c>=65 && c<90) {printf("%c",c+33);}
    else if (c==90) {printf ("%c",97);}
    else if (c>=97 && c<122) {printf("%c",c+1);}
    else if (c==122) {printf("%c",97);}
	else {printf("INVALID");
	}
    return 0;
}
