#include<stdio.h>
int main(){
	int i=10;
	if((i&-i)==i){
		printf("TRUE");
	}
	else{
		printf("FALSE");
	}
	return 0;
}
