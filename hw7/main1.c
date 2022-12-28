#include<stdio.h>
int main(){
	int n=7,x;
	for(int i=1;i<=n;i++){
		x=8-i;
		for(int j=1;j<=8;j++){
			j<=x?printf(" "):(printf("%d ",i));
		}
		printf("\n");
	}
	return 0;
}
