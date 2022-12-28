#include<stdio.h>
int main(){
	int a=1,b=1;
	while(a<=9){
		printf("%d*%d=%d\t",a,b,a*b);
		b<9?b++:(b=1,a++,printf("\n"));
	}
	return 0;
}
