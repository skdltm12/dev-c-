#include <stdio.h>

int rSum(int z){
		if(z==1){
			return 1;
		}
		return z+rSum(z-1);
	}

	int main(void){
		int data;	
		printf("1������ �հ踦 ���� ������ �Է��ϼ��� : ");
		scanf("%d",&data);
		printf("1���� %d�� �հ� : %d",data,rSum(data));
	
	 
	return 0;
}
