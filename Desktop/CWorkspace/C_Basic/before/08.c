//if���� �̿��Ͽ� ������ ����� ���ϴ� ���α׷� 
#include<stdio.h>
int main(void){
	int number;
	
	printf("���ڸ� �Է��Ͻÿ� :");
	scanf("%d",&number);
	
	if(number > 0)
	 printf("%d�� ����Դϴ�",number);
	 
	if(number == 0)
	 printf("�Էµ� ������ 0�Դϴ�");
	  
    if(number < 0) 
	 printf("%d�� �����Դϴ�",number);
	 
	return 0; 
}
