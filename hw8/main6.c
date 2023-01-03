#include<stdio.h>
int main() {
	int n = 4;
	int space, star, k;
	for (int i = 1; i <= n; i++) {
		for (space = n - i; space > 0; space--) {
			printf(" ");
		}
		for (star = 1; star < (i * 2); star++) {
			printf("*");
		}
		printf("\n");
	}
	k = star - 1;
	for (star = 1; star <= k; star++) {
		printf("*");
	}
	printf("\n");
	for (int i = 1; i <= n; i++) {
		printf("*");
		for (space = 1; space <= k - 2; space++) {
			printf(" ");
		}
		printf("*\n");
	}
	for (star = 1; star <= k; star++) {
		printf("*");
	}
	//printf("%d",star-1);
	return 0;
}