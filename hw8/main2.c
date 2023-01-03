#include<stdio.h>
int main() {
	int i = 15;
	int j;
	int total = 0;
	while (1) {
		for (int k = 2; k <= i; k *= 2) {
			j = k;
		}
		i = i - j;
		total++;
		if (i == 1) {
			total++;
			break;
		}
		if (i == 0) {
			break;
		}
	}
	printf("%d", total);
	return 0;
}