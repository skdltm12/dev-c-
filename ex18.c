#include <stdio.h>
//5���� ����,����,����,������ �迭������ �Է¹޾�
// ���� ����, ���� ���, ���� ����, ���� ������ ����ϰ�,
// ��� ����� ������ ����, ���, ����, ������ ����ϰ�,
// ���� ����, ���� ���, ���� �ִ밪, ���� �ּҰ��� ����ϸ�
//  
int main(void){
	int num[5] = {0,1,2,3,4};
	int jum[5][4] = {{1,90,80,70},{2,100,90,80},{3,80,75,80},{4,90,100,100},{5,75,100,75}}; 
	int tot[5] = {0,0,0,0,0}; 		//���� ���� 
	float avg[5] = {0.0f,0.0f,0.0f,0.0f,0.0f};	//���� �� �� 
	char hak[5] = {'A','A','A','A','A'};
	int hap[3] = {0,0,0};	//���� ����
	int rank[5] = {1,1,1,1,1}; 	//���� ���� 
	float py[3] = {0.0f,0.0f,0.0f};  // ���� ���
	int max[3] = {0,0,0};	//���� �ִ밪
	int min[3] = {100,100,100};	//���� �ּҰ�
	int i = 0;
	int j = 0;
	for(i=0;i<5;i++){	
		for(j=1;j<4;j++){
			tot[i]+=jum[i][j];	//���� ���� 
			hap[j-1]+=jum[i][j]; //���� ���� 
}
}
	for(i=0;i<5;i++){
		avg[i] =(float)tot[i]/3;		//���� ��� 
		if(avg[i]>=90){		//���� ���� 
			hak[i] = 'A';
		} else if (avg[i]>=80){
			hak[i] = 'B';
		}  else if (avg[i]>=70){
			hak[i] = 'C';
		}  else if (avg[i]>=60){
			hak[i] = 'D';
		}  else (hak[i] = 'F');
		
	}
			
	
	 for(i=0;i<5;i++){		//�� �� 
	 	for(j=0;j<5;j++){
		if(tot[i]<tot[j]) {
	 		rank[i]+=1;

		 }
	 }
	 }
	 //���� ��� 
	 for(j=0;j<3;j++){py[j] = hap[j]/5;}
	 
	 for(i=0;i<3;i++){
	 	for(j=0;j<5;j++){
		 	if(max[i] < jum[j][i]){		//���� �ִ밪 
		 		max[i] = jum[j][i];
			 }
			if(min[i] > jum[j][i]){		//���� �ּҰ� 
				min[i] = jum[j][i];
			}

	 } 
}
	printf("��ȣ\t\t ����\t ����\t ����\t ����\t ���\t ����\t ����\n");
	for(i=0;i<5;i++){
		printf("%d\t\t%d\t%d\t%d\t%d\t%.2f\t%c\t%d\n", jum[i][0],
		jum[i][1],jum[i][2],jum[i][3],tot[i],avg[i],hak[i],rank[i]);
		}
		printf("��������\t%d\t%d\t%d\n",hap[0],hap[1],hap[2]);
		printf("�������\t%d\t%d\t%d\n",py[0],py[1],py[2]);
		printf("�����ִ�\t%d\t%d\t%d\n",max[0],max[1],max[2]);
		printf("�����ּ�\t%d\t%d\t%d\n",min[0],min[1],min[2]);
	
	return 0;
} 
