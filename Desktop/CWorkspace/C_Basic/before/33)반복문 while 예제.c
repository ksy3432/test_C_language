//����ڰ� �Է��ϴ� 5���� ���� ���Ͽ� ����ϴ� ���α׷� 
#include<stdio.h>
int main(void){
	int a;
	int count,sum;
	
	count = 0;
	sum = 0;
	
	while(count <= 4){
		printf("������ �Է��Ͻÿ� : ");
		scanf("%d",&a);
		
		sum += a;
		a++;
		count++;		
	}
	printf("����ڰ� �Է��� ���� 5���� ���� %d�Դϴ�",sum);
	
	return 0;
}
