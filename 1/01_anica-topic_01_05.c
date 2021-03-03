#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
int funkcija(char a, char b) {
	return minus((int) a -(int) b);
}
int minus(int a) {
	if (a < 0)return -a;
	else return a;
}

int main(void) {
	char a, b;
	int c;
	scanf("%c %c", &a, &b);

	if (isalpha((int)a) && isalpha((int)b))
		c = funkcija(a, b);
	else c = -1;
	return 0;

}
