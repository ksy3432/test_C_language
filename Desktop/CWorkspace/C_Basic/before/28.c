//����ڷκ��� 3���� ������ �Է¹޾� ���� ���� ������ �Ǵ��ϴ� ���α׷� 
#include<stdio.h>
int main(void){
	int x,y,z;
	
	printf("������ �� �� �Է��Ͻÿ� : ");
	scanf("%d,%d,%d",&x,&y,&z);
	
	if(x>y){
		if(y>z)
		  printf("���� ���� ������ %d�Դϴ�",z);
		else
		  printf("���� ���� ������ %d�Դϴ�",y);
	}
	else{
		if(x<z)
		  printf("���� ���� ������ %d�Դϴ�",x);
		else
		  printf("���� ���� ������ %d�Դϴ�",z);
	}
	
	return 0;
	}
