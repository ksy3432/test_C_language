//�ݺ��� �̿��� �������� ���ϱ�
#include<stdio.h>
int main(void){
	int i,n;
	
	printf("n�� ���� �Է��Ͻÿ� :");
	scanf("%d",&n);
	
	printf("************************\n");
	printf(" ������ ������ ��������\n");
	printf("************************\n");
	
	for(i=1;i<=n;i++)
	 printf("%5d   %5d   %5d\n",i,i*i,i*i*i);
	 
	return 0; 
} 
