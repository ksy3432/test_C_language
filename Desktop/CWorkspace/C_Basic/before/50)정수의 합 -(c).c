//����ڰ� �Է��� ������ ���� ���ϴ� ���α׷� -(c)
#include<stdio.h>
int main(void){
	int i,sum,count;
	
	sum = 0;
	count = 0;
	
	while(i>=0){
		printf("������ �Է��Ͻÿ�(���߰� �ʹٸ� 0�� �����ÿ�):");
		scanf("%d",&i);
		
		if(i>0)
		  sum += i;
		  count++;
		if(i == 0)
		  break; 
	}
	printf("�Է��� ������ %d���̰� ��� ������ ���� %d�Դϴ�",count,sum);
	
	return 0;
} 
