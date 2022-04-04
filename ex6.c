#include <stdio.h>
//연산자 : 산술, 대입, 증감, 비교, 논리, 비트
//소스코드(.c) -> 언어번역(컴파일) -> 실행코드 (.exe)
int main(void){
	int num1 = 10;
	int num2 = 5;
	int num3 = 20;
	int num4 = 30;
	
	printf("\nnum1+num2=%d", num1+num2);
	printf("\nnum1-num2=%d", num1-num2);
	printf("\nnum1*num2=%d", num1*num2);
	printf("\nnum1/num2=%d", num1/num2);
	printf("\nnum1 나눈 나머지 num2=%d", num1%num2);
	
	num3+=5;	// 25
		printf("\nnum3+=5의 결과 : %d",num3);
	num4-=5;	// 25
		printf("\nnum4-=5의 결과 : %d",num4);
	num3*=3;	// 75
		printf("\nnum3*=3의 결과 : %d",num3);
	num4/=3;	// 8
		printf("\nnum4/=5의 결과 : %d",num4);
	num3%=5;	// 0
		printf("\nnum3%%=5의 결과 : %d",num3);

}
	
