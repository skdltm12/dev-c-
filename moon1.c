#include<stdio.h>
int main (void){
	
//	1번문제 
	int a;
	int b;
	printf("단수 입력 : ");
	scanf("%d",&a);	
	for(b=1;b<10;b++){
		printf("%d*%d=%d\n",a,b,a*b);
	}
	return 0; 
}
