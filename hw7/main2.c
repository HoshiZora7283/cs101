#include<stdio.h>
int main(){
	int i=0;
	double pi=4.0f;
	for(int x=3;x<=1000000;x+=2){
		if(i==0){
			pi=pi-(4.0/x);
			i=1;
		}
		else{
			pi=pi+(4.0/x);
			i=0;
		}
		if(pi==3.14159){
			break;
		}
	}
	printf("PI = %.5f",pi);
	return 0;
}
