#include <stdio.h>
//	3번문제

int main(void){

	int a,b;
	int c=0;
	printf("소수인지 알아볼 정수를 입력해주세요. : ");
	scanf("%d",&b);
	
	for(a=1;a<=b;a++){
		if(b%a==0){c+=a;}
	}
	if(c-1==b){printf("%d = 소수 입니다.",b);}
		else{printf("%d = 소수가 아닙니다.",b);}
		
	return 0;
}
	
