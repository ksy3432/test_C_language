//���� Ȱ�� ���� 
#include<stdio.h>
#include<stdlib.h>

double b_rand(double n);
double f_rand(double n);
double rand_range(double low,double high);

int main(void){
	double low,high,n;
		
	printf("���۰��� �Է��Ͻÿ� :");
	scanf("%lf",&low);
	printf("���ᰪ�� �Է��Ͻÿ� :");
	scanf("%lf",&high); 
	
	printf("0�Ǵ� 1�� �������� ��ȯ�ϴ� �Լ� : %f \n",b_rand(n));
	printf("0.0 ~ 1.0 ������ ���� �������� ��ȯ�ϴ� �Լ�: %f \n",f_rand(n));
	printf("%f ~ %f ������ ���� �������� ��ȯ�ϴ� �Լ� : %f \n",low,high,rand_range(low,high));
	
	return 0;
}

double b_rand(double n){
	n = rand()%2;
	return n;
}

double f_rand(double n){
	n  = rand()/(double)RAND_MAX;
	return n;
}

double rand_range(double low,double high){
	double n;
	
	n  = (rand()/(double)RAND_MAX) + high - low;
	
	return n;
}
