#include<stdio.h>
int swp(int *a,int *b);
int main(){
	int n=5;
	int m=10;
	swp( &n, &m);
	printf("%d\n",n);
	printf("%d",m);
	return 0;
}
int swp(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
