//��� ������ ������ ���� �ٸ��� ����Ǵ� �������� �����ؼ� �� �ݾ��� ����ϴ� ���α׷�
#include<stdio.h>
int main(void){
	float count;
	
	printf("�� ������ ������ �Է��Ͻÿ� :");
	scanf("%f",&count);
	 
	if(count <= 0)
	 printf("����� �Է��ϼ���");
	else if(count >= 10 && count <20)
	 printf("�������� ����Ǿ� �� ��ǰ�� ������ %f�Դϴ�",100*count*0.9);
	else if(count < 100)
	 printf("�������� ����Ǿ� �� ��ǰ�� ������ %f�Դϴ�",100*count*0.8);
	else 
	 printf("�������� ����Ǿ� �� ��ǰ�� ������ %f�Դϴ�",100*count*0.7);
	  
	  
	return 0; 
} 
