#include <stdio.h>
int main(void){
	
	char* pt_chr =0;
	int* pt_int = NULL;
	double* pt_double = 0x00;
	int num1 = 20; 
	int num2 = 40;
	int *pt_num1 = &num1;
	int *pt_num2 = &num2;
	
	
	//1) pt_chr�� �ּ�
	printf("pt_chr�� �ּ�=%#x",pt_chr);
	//2) pt_int�� �ּ� 
	printf("\npt_int�� �ּ�=%#x",pt_int);
	//3) pt_double�� �ּҸ� 16������ ���
	printf("\npt_double�� �ּ�=%#x",pt_double);
	//4) pt_chr�� 1���� ���� �ּҸ� 16������ ���;
	printf("\npt_chr�� 1���� ���� �ּ�=%#x",++pt_chr);
	//5) pt_int�� 1���� ���� �ּҸ� 16������ ���;
	printf("\npt_int�� 1���� ���� �ּ�=%#x",++pt_int); 
	//6) pt_dobule�� 1���� ���� �ּҸ� 16������ ���
	printf("\npt_double�� 1���� ���� �ּ�=%#x",++pt_double); 
	//7) pt_num1�� ����Ű�� �ִ� �����Ϳ� pt_num2�� ����Ű�� �ִ� �����͸�
	//if���� Ȱ���Ͽ� >,>=,<,<=,==,!= 
	if(*pt_num1>*pt_num2){
		printf("\npt_num1 > pt_num2");
	}if(*pt_num1>=*pt_num2){
		printf("\npt_num1 >= pt_num2");
	}if(*pt_num1<*pt_num2){
		printf("\npt_num1 < pt_num2");		
	}if(*pt_num1<=*pt_num2){
		printf("\npt_num1 <= pt_num2");	
	}if(*pt_num1==*pt_num2){
		printf("\npt_num1 == pt_num2");
	}if(*pt_num1!=*pt_num2){
		printf("\npt_num1 != pt_num2");}

	
	return 0;
}
