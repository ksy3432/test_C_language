//�л����� ��� ������ ���ϴ� ���α׷� - (b) �迭�� ����ϴ� ���� 
#include<stdio.h>
int main(void){
	int g[5];
	int average,student,i;
	int sum = 0;
	
	printf("�л� ���� �Է��Ͻÿ� :");
	scanf("%d",&student);
	
	for(i=0;i<student;i++){
		printf("�л��� ������ �Է��Ͻÿ� :");
		scanf("%d",&g[i]);
	}
	
	for(i=0;i<student;i++)
	   sum += g[i];
	   
	average = sum/student;
	
	printf("�л����� ��� ������ %d�Դϴ�\n",average);
	
	return 0;
	} 
