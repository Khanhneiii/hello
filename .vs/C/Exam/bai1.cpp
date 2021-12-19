#include <stdio.h>

int main() {
    char c;
    scanf("%c",&c);
    if (c >= 66 && c <=90) printf ("%c ",c-1);
    else if (c >= 98 && c <= 122) printf ("%c", c-33);
    else if (c == 65 || c== 97) printf ("%c ",90);
    else printf ("INVALID");
    return 0;
}