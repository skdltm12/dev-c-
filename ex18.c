#include <stdio.h>
//5명의 국어,영어,수학,점수를 배열변수로 입력받아
// 개인 총점, 개인 평균, 개인 학점, 개인 석차를 계산하고,
// 모든 사람의 점수와 총점, 평균, 학점, 석차를 출력하고,
// 과목별 총점, 과목별 평균, 과목별 최대값, 과목별 최소값을 출력하며
//  
int main(void){
	int num[5] = {0,1,2,3,4};
	int jum[5][4] = {{1,90,80,70},{2,100,90,80},{3,80,75,80},{4,90,100,100},{5,75,100,75}}; 
	int tot[5] = {0,0,0,0,0}; 		//개인 총점 
	float avg[5] = {0.0f,0.0f,0.0f,0.0f,0.0f};	//개인 평 균 
	char hak[5] = {'A','A','A','A','A'};
	int hap[3] = {0,0,0};	//과목별 총점
	int rank[5] = {1,1,1,1,1}; 	//개인 석차 
	float py[3] = {0.0f,0.0f,0.0f};  // 과목별 평균
	int max[3] = {0,0,0};	//과목별 최대값
	int min[3] = {100,100,100};	//과목별 최소값
	int i = 0;
	int j = 0;
	for(i=0;i<5;i++){	
		for(j=1;j<4;j++){
			tot[i]+=jum[i][j];	//개인 총점 
			hap[j-1]+=jum[i][j]; //과목별 총점 
}
}
	for(i=0;i<5;i++){
		avg[i] =(float)tot[i]/3;		//개인 평균 
		if(avg[i]>=90){		//개인 학점 
			hak[i] = 'A';
		} else if (avg[i]>=80){
			hak[i] = 'B';
		}  else if (avg[i]>=70){
			hak[i] = 'C';
		}  else if (avg[i]>=60){
			hak[i] = 'D';
		}  else (hak[i] = 'F');
		
	}
			
	
	 for(i=0;i<5;i++){		//석 차 
	 	for(j=0;j<5;j++){
		if(tot[i]<tot[j]) {
	 		rank[i]+=1;

		 }
	 }
	 }
	 //과목별 평균 
	 for(j=0;j<3;j++){py[j] = hap[j]/5;}
	 
	 for(i=0;i<3;i++){
	 	for(j=0;j<5;j++){
		 	if(max[i] < jum[j][i]){		//과목별 최대값 
		 		max[i] = jum[j][i];
			 }
			if(min[i] > jum[j][i]){		//과목별 최소값 
				min[i] = jum[j][i];
			}

	 } 
}
	printf("번호\t\t 국어\t 영어\t 수학\t 총점\t 평균\t 학점\t 석차\n");
	for(i=0;i<5;i++){
		printf("%d\t\t%d\t%d\t%d\t%d\t%.2f\t%c\t%d\n", jum[i][0],
		jum[i][1],jum[i][2],jum[i][3],tot[i],avg[i],hak[i],rank[i]);
		}
		printf("과목별총점\t%d\t%d\t%d\n",hap[0],hap[1],hap[2]);
		printf("과목별평균\t%d\t%d\t%d\n",py[0],py[1],py[2]);
		printf("과목별최대\t%d\t%d\t%d\n",max[0],max[1],max[2]);
		printf("과목별최소\t%d\t%d\t%d\n",min[0],min[1],min[2]);
	
	return 0;
} 
