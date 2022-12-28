#include<stdio.h>
int main(){
	int year=2022;
	if(year%4==0&&year%100!=0){
		printf("¶|¦~");
	}
	else if(year%400==0){
		printf("¶|¦~");
	}
	else{
		printf("¤£¬O¶|¦~");
	}
	return 0;
}
