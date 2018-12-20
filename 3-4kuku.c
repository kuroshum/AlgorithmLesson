#include <stdio.h>

int main(void)
{
	int i, j;

	for (i = 9; i >= 1; i--) {
		for (j = 9; j >= 1; j--) {
		if((i*j) % 10 == 4 ||(i*j) % 10 == 6 || (i*j) / 10 == 4 || (i*j) / 10 == 6){
		   printf(" ");
		   continue;
		}
			printf("%2d ", i*j);
		}
		printf("\n");
	}
	
}
