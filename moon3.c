#include <stdio.h>
//	3������

int main(void){

	int a,b;
	int c=0;
	printf("�Ҽ����� �˾ƺ� ������ �Է����ּ���. : ");
	scanf("%d",&b);
	
	for(a=1;a<=b;a++){
		if(b%a==0){c+=a;}
	}
	if(c-1==b){printf("%d = �Ҽ� �Դϴ�.",b);}
		else{printf("%d = �Ҽ��� �ƴմϴ�.",b);}
		
	return 0;
}
	
