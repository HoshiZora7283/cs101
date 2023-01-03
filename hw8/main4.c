#include<stdio.h>
void round_func(float f) {
	f=f*10;
	if((int)f%10>=5){
		printf("%d",((int)f/10)+1);
	}
	else if((int)f%10<5){
		printf("%d",(int)f/10);
	}
}
int main(){
	float i=1.4;
	round_func(i);
	return 0;
}