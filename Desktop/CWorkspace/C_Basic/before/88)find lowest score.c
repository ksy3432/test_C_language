//���� ������ ���� �л��� ���ϴ� ���α׷�
#include<stdio.h>
int main(void){
	int grade[10];
	int i,min;
	
	for(i=0;i<10;i++){
		printf("%d��° �л��� ������ �Է��Ͻÿ� :",i+1);
		scanf("%d",&grade[i]); 
	}
	
	min = grade[0];
	
	for(i=1;i<10;i++){
		if(grade[i] < min)
		   min = grade[i]; 
	}
	
	printf("���� ���� �л��� ������ %d�Դϴ�",min);
	
	return 0;
	
} 
