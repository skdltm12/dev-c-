#include <stdio.h>
//������ : ���, ����, ����, ��, ��, ��Ʈ
//�ҽ��ڵ�(.c) -> ������(������) -> �����ڵ� (.exe)
int main(void){
	int num1 = 10;
	int num2 = 5;
	int num3 = 20;
	int num4 = 30;
	
	printf("\nnum1+num2=%d", num1+num2);
	printf("\nnum1-num2=%d", num1-num2);
	printf("\nnum1*num2=%d", num1*num2);
	printf("\nnum1/num2=%d", num1/num2);
	printf("\nnum1 ���� ������ num2=%d", num1%num2);
	
	num3+=5;	// 25
		printf("\nnum3+=5�� ��� : %d",num3);
	num4-=5;	// 25
		printf("\nnum4-=5�� ��� : %d",num4);
	num3*=3;	// 75
		printf("\nnum3*=3�� ��� : %d",num3);
	num4/=3;	// 8
		printf("\nnum4/=5�� ��� : %d",num4);
	num3%=5;	// 0
		printf("\nnum3%%=5�� ��� : %d",num3);

}
	
