#include<stdio.h>
int rows=5;
void print_spaces(int r){
    int i;
    for(i=0;i<rows-r;i++){
        printf("  ");
    }
}
void print_stars(int r){
    int i;
    for(i=1;i<(r*2);i++){
        printf("* ");
    }
}
int main(){
    int j;
    for(int i=rows;i>=1;--i){
        print_spaces(i);
        print_stars(i);
        printf("\n");
    }
	return 0;
}
