//�ݺ��� : ���� ������ ������ �����ؾ��ϴ� ���  Ȱ���ϴ�  ���� while/do~while/for
//���ѷ��� : �׻� ������ �����Ͽ� ��� ���������� ������ �ݺ��� 
#include<stdio.h> 
int main(void){
	int i =0;
	while(i<10){
			
			printf("\ni=%d", i);		
			i++;
	}
	printf("\n����i�� %d",i);
	return 0;
	
	int j =0;
	printf("\n");
	//������ �� ���� ���� �� �� �ֵ��� ���� - do~while 
	do{
		j++;
		printf("\nj=%d",j);
	}	while(j>10);
		
	
	
	
}