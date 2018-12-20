#include <stdio.h>

int main()
{
	int i, k,s;

	printf("辺の長さ：");
	scanf("%d", &k);

	for (i = 0; i < k; i++) {
		for (s = 1; s <= i; s++) {
			printf(" ");
		}
		for (s = 1; s <= k - i; s++) {
			printf("*");
		}
		printf("\n");
	}
}
