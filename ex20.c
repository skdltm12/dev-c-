#include<stdio.h>

int main(void){
	int num1 = 1234;
	double num2 = 3.14;
	int* pt_num1 = &num1;	//�����Ϳ� ���Կ����� ��쿣 �ּҸ� �־�� ��. 
	double* pt_num2 = &num2;//&���� => �ּ� ������ 
	
	printf("pt_num1�� ���� ũ�� = %d",sizeof(pt_num1));
	printf("\npt_num1�� ����Ű�� �ִ� �ּҸ� ��� = %#x",pt_num1);
	printf("\npt_num2�� ����Ű�� �ִ� �ּҸ� ��� = %#x",pt_num2);
	printf("\npt_num1�� ����Ű�� �ִ� �ּ��� ��ġ�� ����� ���� ��� = %d",*pt_num1);
	printf("\npt_num2�� ����Ű�� �ִ� �ּ��� ��ġ�� ����� ���� ��� = %.2f",*pt_num2);
	
	return 0;
}
