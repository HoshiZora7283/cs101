#include<stdio.h>
int main(){
	int i=4;
	if((i&-i)==i){
		printf("TRUE");
	}
	else{
		printf("FALSE");
	}
	return 0;
}
