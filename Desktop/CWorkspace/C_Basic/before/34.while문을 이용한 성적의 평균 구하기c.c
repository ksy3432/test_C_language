//while���� �̿��� ������ ��� ���ϱ�
#include<stdio.h>
int main(void){
	int grade,n;
	float sum,average;
	
	n = 0;
	sum = 0;
	grade = 0;
	
	printf("���� �Է��� �ߴ��Ϸ��� ������ �Է��Ͻÿ�\n");
	
	while(grade >= 0){
		printf("������ �Է��Ͻÿ� :");
		scanf("%d",&grade);
		
		sum += grade;
		n++; 
	}
	sum = sum - grade;
	n--;
	average = sum/n;
	printf("������ ����� %f�Դϴ�",average);
	
	return 0;
	
} 
