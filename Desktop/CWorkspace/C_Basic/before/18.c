//if-else���� �̿��Ͽ� Ȧ���� ¦���� �����Ѵ� 
#include<stdio.h>
int main(void){
	int number;
	
	printf("���ڸ� �Է��Ͻÿ� : ");
	scanf("%d",&number);
	
	if(number%2 == 0)
	 printf("�Է��Ͻ� ������ %d�� ¦���Դϴ�",number);
	
	else
	 printf("�Է��Ͻ� ������ %d�� Ȧ���Դϴ�",number);
	 
	return 0; 
}
