//�ݺ��� �̿��� ������ ���α׷� 
#include<stdio.h>
int main(void){
	int i,n,sum;
	
	sum = 0;
	 
	printf("n������ ���� ���� ��,n�� ���� �Է��Ͻÿ� :");
	scanf("%d",&n);
	
	for(i=1 ;i <= n;i++)
	 sum += i;
	
	printf("n������ ���� %d�Դϴ�",sum);
	
	return 0; 
}
