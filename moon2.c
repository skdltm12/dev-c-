#include<stdio.h>
int main(void){

	//2������ 
	int c, d;
	printf("\n�ִ� ������� ���� ���� �� ���� �Է��ϼ���\n");
	printf("ù��° �� : ") ;
	scanf("%d",&c);
	printf("�ι�° �� : ");
	scanf("%d",&d);
	
	while(d != 0){		
		if(c > d){
			c -= d;
		}else{
			d -= c;
		}
	
	}
	printf("�ִ� ����� : %d",c);
return 0;	
}
	
	
