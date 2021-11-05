#include <stdio.h>
#include <ctype.h>
 int main ()
 {
 	char c;
 	scanf("%c",&c);
 	printf("%c",c);
 	if (c>=0 && c<=31) {printf ("no");} else {
	 printf ("yes");
	 }
 	;return 0;
 }
