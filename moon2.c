#include<stdio.h>
int main(void){

	//2번문제 
	int c, d;
	printf("\n최대 공약수를 구할 정수 두 개를 입력하세요\n");
	printf("첫번째 수 : ") ;
	scanf("%d",&c);
	printf("두번째 수 : ");
	scanf("%d",&d);
	
	while(d != 0){		
		if(c > d){
			c -= d;
		}else{
			d -= c;
		}
	
	}
	printf("최대 공약수 : %d",c);
return 0;	
}
	
	
