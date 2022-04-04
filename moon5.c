#include <stdio.h>

int rSum(int z){
		if(z==1){
			return 1;
		}
		return z+rSum(z-1);
	}

	int main(void){
		int data;	
		printf("1부터의 합계를 구할 정수를 입력하세요 : ");
		scanf("%d",&data);
		printf("1부터 %d의 합계 : %d",data,rSum(data));
	
	 
	return 0;
}
