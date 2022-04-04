//비교 연산자 : 변수에 담긴 내용과 특정 값과 비교하는 연산자로 결과는 논리값이 출력됨 
#include<stdio.h>
int main(void){
	int num1 = 10;
	int num2 = 20;
	char data1 = 'a';
	char data2[4] = "kim";	//글자수보다 하나 더 크게 잡아야 한다. 
	
	printf(num1 > num2);
	printf(num1 >= num2);
	printf(num1 < num2);
	printf(num1 <= num2);
	printf(num1 == num2);
	printf(num1 != num2);
	 
	return 0;
}



