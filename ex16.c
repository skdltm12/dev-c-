#include <stdio.h>
//함수명 : sum
//함수 처리조건 : 1부터 키보드로 입력한 숫자만큼 더하여 반환하는 프로그램을 

int sum(int n){
	//1~n까지의 합계를 계산하여 반환
	int i, res = 0; 
	for(i=1;i<=n;i++){
	
		res+=i;
}
		return res;
	
}
//재귀 호출 함수(recursive call function) : 자기 자신을 반복 호출 
int rSum(int n){
	if(n==1){
		return 1;
	} 
	return n+rSum(n-1);
} //만약 20까지의 합계를 계산시에 자기자신을 계속 호출하여 반복  20+19+18+17+16.... 
int main(void){
	int data;
	printf("숫자 입력: ");
	scanf("%d", &data);
	printf("1부터 %d의 합계 : %d", data, rSum(data));
	return 0;
}
