#include<stdio.h>
int main(){
	int number=5;
	int *prt=&number;
	printf("%d\n",number);
	printf("%d\n",*prt);
	printf("%d\n",&number);
	printf("%d\n",prt);
	return 0;
}
