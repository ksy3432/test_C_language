//�ݺ��� �̿��� ���丮�� ���ϱ�
#include<stdio.h>
int main(void){
	long fact = 1;
	int i,n;
	
	printf("n�� ���� �Է��Ͻÿ� :");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	 fact *= i;
	
	printf("%d",fact);
	
	return 0;
} 
