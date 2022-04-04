#include <stdio.h>

int main(void){
//		4번 문제 
int i, j;
int num[5]={0,1,2,3,4};
int jum[5][4]={{1,90,80,75},{2,75,85,100},{3,80,95,100},{4,100,100,95},{5,50,60,35}};
int tot[5]={0,0,0,0,0};
int rank[5]={1,1,1,1,1};
double avg[5]={0,0,0,0,0};
char hak[5]={'A','A','A','A','A'};

printf("번호\t전산\toa\tpg\t개인총점\t개인평균\t학점\t석차\n\n");
	
	for(i=0;i<5;i++){
		for(j=1;j<4;j++){
		tot[i]+=jum[i][j];}	
		if(tot[i]<tot[j]){rank[i]+=1;}}
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
		if(tot[i]<tot[j]){rank[i]+=1;
		}}}
	for(i=0;i<5;i++){
 	avg[i]=(double)tot[i]/3;	
 	if (avg[i]>=90){ hak[i]='A';}
	else if(avg[i]>=80){hak[i]='B';}
	else if(avg[i]>=70){hak[i]='C';}
	else if(avg[i]>=60){hak[i]='D';}
	else{hak[i]='F';}
printf("%d\t%d\t%d\t%d\t%d\t\t%.2f\t\t%c\t%d\n",jum[i][0],jum[i][1],jum[i][2],jum[i][3],tot[i],avg[i],hak[i],rank[i]);}

return 0;	
}
