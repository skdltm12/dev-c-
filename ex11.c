//조건분기문 : 조건에 따라 처리방법이 나누어지는 문장 - if, switch
#include<stdio.h>
int main(void){
//	int a = 10;
//	int b = 20;
//	if(a>b){
//		printf("a가 더 큽니다. %d", a);
//	} else {
//		printf("b가 더 큽니다. %d", b);
		
	
//	}
	
	int score = 90; //학점 100~90:A, 89~80:B, 79~70:C, 69~60:D, 59~:F
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
	
	printf("\n학점은 %c 입니다.", hak);
	
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
		printf("\n당신의 평점은 %d 입니다.",point);
		
	return 0;
}
	
//	switch(score){
//		case A :
//			printf("평점은 5 점입니다.");
//			break;
//		case B :
//			printf("평점은 4 점입니다.");
//			break;
//		case C :
//			printf("평점은 3 점입니다.");
//			break;
//		case D :
//			printf("평점은 2 점입니다.");	
//			break;		
//		case F :
//			printf("평점은 1 점입니다.");
//			break;
//	}
		

 
 
