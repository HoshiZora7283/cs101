#include<stdio.h>
int main() {
	int n = 4;
	int space, star, i;
	for (i = n; i >= 1; i--) {
		for (space = i; space < n; space++) {
			printf(" ");
		}
		for (star = i * 2 - 1; star >= 1; star--) {
			printf("*");
		}
		printf("\n");
	}
	for (i = 2; i <= n; i++) {
		for (space = n - i; space > 0; space--) {
			printf(" ");
		}
		for (star = 1; star < (i * 2); star++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}