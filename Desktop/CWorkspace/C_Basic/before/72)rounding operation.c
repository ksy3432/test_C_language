//�ݿø��� �����ϴ� ���α׷�
#include<stdio.h>
#include<math.h>

double round(double f);

int main(void){
	double f;
	
	printf("�Ǽ��� �Է��Ͻÿ� :");
	scanf("%lf",&f);
	
	printf("�ݿø��� ���� %f�Դϴ�\n",round(f));
	
	return 0;
} 

double round(double f){
	double result;
	
	if(f - floor(f) >= 0.5)
	   result = ceil(f);
	else 
	   result = floor(f);
	   
	return result;
}

