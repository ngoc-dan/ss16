#include<stdio.h>
int sum(int *n,int *m);
int main(){
	int a=3;
	int b=4;
	int s=sum(&a,&b);
	printf("tong 2 so la : %d",s);
	return 0;
}
int sum(int *n,int *m ){
	int s;
    s = *m+*n;
    return s;
}
