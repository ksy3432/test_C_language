//���� �̿��Ͽ� ������ ����׷����� �׸��� ���α׷� 
#include<stdio.h>
int main(void){
	int i,n,number;
	
	for(number=1;number<=10;number++){
		printf("\n���� #%d�� ����:",number);
		scanf("%d",&n);
		
		for(i=1;i<=n;i++)
		  printf("*");
	}
	return 0;
} 
