//����ڰ� �Է��� ��� ������ ���Ͽ� 1���� �� ���������� ���� ����ϴ� ���α׷�
#include<stdio.h>
int main(void){
	int i,n,sum;
	
	printf(" ������ �Է��Ͻÿ� :");
	scanf("%d",&n);
	printf("---   -----------------\n");
	printf(" n    1���� n������ ��\n");
	printf("---   -----------------\n");
	
	sum = 0;
	
	for(i=1;i<=n;i++){
		sum += i;
		printf(" %d      %d\n",i,sum);
 }
    return 0; 
} 
