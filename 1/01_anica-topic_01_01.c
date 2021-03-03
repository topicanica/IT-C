#include <stdio.h>
int main(void)
{
	int s;
	int y, x;
	scanf("%d", &s);

	for (y = 0; y < s; y++) {
		printf("X");
		
		for (x = 0; x < y; x++) {

			printf("+");
			
		}
	printf("\n");

	}


	return 0;
}

