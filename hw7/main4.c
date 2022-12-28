#include<stdio.h>
int main(){
	int i=12345;
	int a,b;
	a=i/1000;
	a=a%10;
	b=i%10;
	i=i-(a*1000)-b;
	i=i+(b*1000)+a;
	printf("%d",i);
	return 0;
}
