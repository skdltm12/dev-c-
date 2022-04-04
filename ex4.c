//형변환(casting) = 타입변환(type conversion)
//자동 형변환 (auto casting)  = 묵시적 타입 변환 (implicit type conversion)
//강제 형변환 (force casting) = 명시적 타입 변환(explicit type conversion)
#include<stdio.h>
int main(void){
	char ch = 200;
	int num1 = 3.14;
	double num2 = 5;
	double res1 = 5 + 3.14;
	double res2 = 5.0f + 3.14;
	
	printf("\nch=%d",ch);
	printf("\nnum1=%d",num1);
	printf("\nnum2=%f",num2);
	printf("\nres1=%f",res1);
	printf("\nres2=%f",res2);
	
	int num3 = 1;
	int num4 = 4;
	
	double res3 = num3 / num4;
	double res4 = (double) num3 / num4; //강제 형변환
	
	printf("\nres3=%f",res3) ;
	printf("\nres4=%f",res4) ;
}
