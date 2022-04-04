//for문 - for(초기값;조건식;증감식){실행문};
#include <stdio.h>
int main(void){
	//1~100까지의 홀수의 합계를 계산하여 출력하는 반복문 실행내용을 작성
	int hap = 0;
	int i = 0;
	for(i=0;i<100;i++){
		if(i%2==0){
			continue;
		} 
		hap+=i;
	} 
	printf("\n1~100 홀수의 합계 : %d",hap);
	//구구단 출력 - 이중 for문 사용 
	//2*1=2		3*1=3
	//2*2=4		3*2=6
	//,.....
	printf("\n\n");
	printf("구\t구\t단");
	printf("\n\n");
	int g;
	int a;
	for(g=1;g<10;g++){
	for(a=2;a<10;a++){
	printf("%d*%d=%d\t",a,g,a*g);
	}	
	printf("\n");
	}	
		
	 
	
	
	
	return 0;
}

 
 
