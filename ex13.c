//for�� - for(�ʱⰪ;���ǽ�;������){���๮};
#include <stdio.h>
int main(void){
	//1~100������ Ȧ���� �հ踦 ����Ͽ� ����ϴ� �ݺ��� ���೻���� �ۼ�
	int hap = 0;
	int i = 0;
	for(i=0;i<100;i++){
		if(i%2==0){
			continue;
		} 
		hap+=i;
	} 
	printf("\n1~100 Ȧ���� �հ� : %d",hap);
	//������ ��� - ���� for�� ��� 
	//2*1=2		3*1=3
	//2*2=4		3*2=6
	//,.....
	printf("\n\n");
	printf("��\t��\t��");
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

 
 
