//증감 연산자 : 변수의 값이 점차 증가되거나  감소되는 연산자
#include<stdio.h>

int main(void){
	int a = 10;
	int b = 20;
	int c = 30;
	int d = 40;
	
	printf("후위 증가 a=%d, %d",a,a++);
	printf("\n전위 증가 b=%d, %d",b,++b);
	printf("\n후위 감소 c=%d, %d",c,c--);
	printf("\n전위 감소 d=%d, %d",d,--d);
	
	
	
	
	
	return 0;
}
 
