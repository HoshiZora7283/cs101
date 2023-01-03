#include<stdio.h>
void get_binary(int n) {
	for (int i = 128; i; i >>= 1) {
		printf(i & n ? "1" : "0");
	}
}
int main() {
	int i = 255;
	get_binary(i);
	return 0;
}