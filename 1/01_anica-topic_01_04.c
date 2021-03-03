#include <stdio.h>
#include <stdlib.h>

int funkcija(int a, int b) {
	return a + rand() % (b - a + 1);
}

int vecimanji(int a, int b) {
	if (a >= b) return a;
	else return b;
}

int main(void) {
	int a,b,c,d;
	scanf("%d %d", &a, &b);
	c = funkcija(a, b);
	d = funkcija(a, b);
	printf("%d %d a veci je %d", c, d, vecimanji(c, d));

	return 0;
}
