//���Ǻб⹮ : ���ǿ� ���� ó������� ���������� ���� - if, switch
#include<stdio.h>
int main(void){
//	int a = 10;
//	int b = 20;
//	if(a>b){
//		printf("a�� �� Ů�ϴ�. %d", a);
//	} else {
//		printf("b�� �� Ů�ϴ�. %d", b);
		
	
//	}
	
	int score = 90; //���� 100~90:A, 89~80:B, 79~70:C, 69~60:D, 59~:F
	char hak;
	if(score>=90){
		hak = 'A';
			}else if(score<90){
		hak = 'B';
			}else if(score<80){
		hak = 'C';
	}		else if(score<70){
		hak = 'D';
	}		else if(score<60){	
		hak = 'F';
	}
	
	printf("\n������ %c �Դϴ�.", hak);
	
	int point;
	
		switch(hak){
		case 'A' :
			point = 5;
			break;
		case 'B' :
			point = 4;
			break;
		case 'C' :
			point = 3;
			break;
		case 'D' :
			point = 2;
			break;
		case 'F' :
			point = 1;
			break;	
			default :
			point = 1;
			break;					
		}
		printf("\n����� ������ %d �Դϴ�.",point);
		
	return 0;
}
	
//	switch(score){
//		case A :
//			printf("������ 5 ���Դϴ�.");
//			break;
//		case B :
//			printf("������ 4 ���Դϴ�.");
//			break;
//		case C :
//			printf("������ 3 ���Դϴ�.");
//			break;
//		case D :
//			printf("������ 2 ���Դϴ�.");	
//			break;		
//		case F :
//			printf("������ 1 ���Դϴ�.");
//			break;
//	}
		

 
 
