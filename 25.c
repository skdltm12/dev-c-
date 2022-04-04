#include<stdio.h>

int main(void){

int i, j;
int num[5]={0,1,2,3,4};
int jum[5][4]={{0,90,80,75},{1,75,85,100},{2,80,95,100},{3,100,100,95},{4,50,60,35}};
int tot[5]={0,0,0,0,0};
int rank[5]={1,1,1,1,1};
double avg[5]={0,0,0,0,0};
char hak[5]={'A','A','A','A','A'};

printf("Á¡¼ö");

for(i=0;i<5;i++){
	for(j=1;j<4;i++){
		tot[i]+=jum[i][j];
	}	
	}


return 0;
}
