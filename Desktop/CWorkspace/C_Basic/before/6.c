#include<stdio.h>
int main(void){
	int k;
	float d;
	float t;
	
	printf("ȯ���� �Է��Ͻÿ� :");
	scanf("%f",&t);
	
	printf("��ȭ�� �Է��Ͻÿ� :");
	scanf("%d",&k);
	
	d = k/t;
	
	printf("���� ȯ���� ������ %d��= %f�޷� �Դϴ�\n",k,d);
	
	return 0; 
}
