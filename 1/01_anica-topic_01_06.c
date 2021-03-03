#include <stdio.h>

int main(void) {
	int a,SHRT_MIN,SHRT_MAX;
	SHRT_MIN = -32768;
	SHRT_MAX = 32767;
	scanf("%d", &a);
	if (a > SHRT_MAX)
		printf("SHRT_MAX %d\n", SHRT_MAX);
	else if (a < SHRT_MIN)
		printf("SHRT_MIN %d\n", SHRT_MIN);
	else
        printf("%d",a);
	return 0;

}
