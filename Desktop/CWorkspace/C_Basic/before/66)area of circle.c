//���� ���̸� ���ϴ� ����
#include<stdio.h>
int input_radius(void);
int area(int r);

int main(void){
	int r;
	
	r = input_radius();
	
	printf("���� ������ %d�Դϴ�",area(r));
	
	return 0;
} 

int input_radius(void){
	int r;
	
	printf("���� �������� �Է��Ͻÿ� :");
	scanf("%d",&r);
	
	return r; 
}

int area(int r){
	float pi = 3.14;
	int s;
	
	s = pi*r*r;
	
	return s;
}
