//����ڰ� �Է��� ������ ���� �ϴ� ���α׷�-(a)
#include<stdio.h>
int main(void){
	int i,n,sum;
	
	printf("������ ������ ���� �Է��Ͻÿ� :");
	scanf("%d",&i);
	
	sum = 0;
	n = i + 99;
	
    while(i<=n){
    	  sum += i;
    	  i++;
	} 

	printf("�Է��� ������  ���� %d�Դϴ�",sum);
	
	return 0;
} 
