#include<stdio.h>
void add(int r) {
	int k=0;
	int x = r;
	while (x != 0) {
		if (x > 0) {
			k = k + (x % 10);
			x = x / 10;
		}
		if (x < 0) {
			if (x / 10 == 0) {
				break;
			}
			k = k - (x % 10);
			x = x / 10;
		}
	}
	if (r > 0) {
		printf("%d\n", k);
	}
	if (r < 0) {
		printf("%d\n", k+x);
	}
}
int main() {
	int a = -999;
	int b = 999;
	add(a);
	add(b);
	return 0;
}