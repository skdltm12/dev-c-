#include <stdio.h>
//�Լ��� : sum
//�Լ� ó������ : 1���� Ű����� �Է��� ���ڸ�ŭ ���Ͽ� ��ȯ�ϴ� ���α׷��� 

int sum(int n){
	//1~n������ �հ踦 ����Ͽ� ��ȯ
	int i, res = 0; 
	for(i=1;i<=n;i++){
	
		res+=i;
}
		return res;
	
}
//��� ȣ�� �Լ�(recursive call function) : �ڱ� �ڽ��� �ݺ� ȣ�� 
int rSum(int n){
	if(n==1){
		return 1;
	} 
	return n+rSum(n-1);
} //���� 20������ �հ踦 ���ÿ� �ڱ��ڽ��� ��� ȣ���Ͽ� �ݺ�  20+19+18+17+16.... 
int main(void){
	int data;
	printf("���� �Է�: ");
	scanf("%d", &data);
	printf("1���� %d�� �հ� : %d", data, rSum(data));
	return 0;
}
