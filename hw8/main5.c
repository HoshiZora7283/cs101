#include<stdio.h>
int space=7;

void print_top() {
	printf("   X'mas tree!\n");
}
void print_truck() {
	for (int i = 0; i < 5; i++) {
		printf("       *\n");
	}
}
void print_spaces(int r) {
	for (int i = r; i <= space; i++) {
		printf(" ");
	}
}
void print_stars(int r) {
	for (int i = 1; i <= r*2-1; i++) {
		printf("*");
	}
}
int main() {
	print_top();
	for (int i = 3; i <= 7;i+=2) {
		for (int j = 1;j<=i; j++) {
			print_spaces(j);
			print_stars(j);
			printf("\n");
		}
	}
	print_truck();
	return 0;
}