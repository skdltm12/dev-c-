#include <stdio.h>
int main(void){
	
	char* pt_chr =0;
	int* pt_int = NULL;
	double* pt_double = 0x00;
	int num1 = 20; 
	int num2 = 40;
	int *pt_num1 = &num1;
	int *pt_num2 = &num2;
	
	
	//1) pt_chr의 주소
	printf("pt_chr의 주소=%#x",pt_chr);
	//2) pt_int의 주소 
	printf("\npt_int의 주소=%#x",pt_int);
	//3) pt_double의 주소를 16진수로 출력
	printf("\npt_double의 주소=%#x",pt_double);
	//4) pt_chr이 1증가 후의 주소를 16진수로 출력;
	printf("\npt_chr의 1증가 후의 주소=%#x",++pt_chr);
	//5) pt_int가 1증가 후의 주소를 16진수로 출력;
	printf("\npt_int의 1증가 후의 주소=%#x",++pt_int); 
	//6) pt_dobule이 1증가 후의 주소를 16진수로 출력
	printf("\npt_double의 1증가 후의 주소=%#x",++pt_double); 
	//7) pt_num1이 가리키고 있는 데이터와 pt_num2가 가리키고 있는 데이터를
	//if문을 활용하여 >,>=,<,<=,==,!= 
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
