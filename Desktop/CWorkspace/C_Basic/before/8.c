#include<stdio.h>
int main(void){
	float x;
	float y;
	float z;
	float sum;
	float average; 
	
	printf("1��° ������ ���� �Է��Ͻÿ� :");
	scanf("%f",&x); 
	
	printf("2��° ������ ���� �Է��Ͻÿ� :");
	scanf("%f",&y); 
	
	printf("3��° ������ ���� �Է��Ͻÿ� :");
	scanf("%f",&z);
	
	sum = x + y + z;
	printf("�� ���� ���� %f",sum);
	
	average = sum / 3; 
	printf("�� ������ ��հ��� %f",average);
	
	return 0;
}
