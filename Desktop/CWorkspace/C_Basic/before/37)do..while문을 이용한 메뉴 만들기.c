//do..while���� �̿��� �޴�
#include<stdio.h>
int main(void){
	int i = 0; 
	
	do
	{
		printf("1--���� �����\n");
		printf("2--���� ����\n");
		printf("3--���� �ݱ�\n");
		printf("�ϳ��� �����Ͻÿ� :");
		scanf("%d",&i);
	} while(i < 1 || i > 3);
	
	printf("������ �޴��� %d�Դϴ�",i);
	
	return 0; 
} 
