//�� ���� �ε��Ҽ��� ���ϱ�
#include<stdio.h>
#include<math.h>

double f_equal(double a,double b);
double min(double a,double b);
double absolute_value(double n);

int main(void){
	double a,b;
	
	printf("1��° �Ǽ��� �Է��Ͻÿ� :");
	scanf("%lf",&a);
	printf("2��° �Ǽ��� �Է��Ͻÿ� :");
	scanf("%lf",&b);
	
	if(f_equal == 0)
		printf("�� �Ǽ��� �ٽ������� ���� �ʽ��ϴ�\n");
	else
		printf("�� �Ǽ��� �ٽ������� �����ϴ�\n");
	
	return 0;
} 

double absolute_value(double n){
	return (fabs(n));
}

double min(double a,double b){
	double k;
	
	if(a >= b)
	   k = b;
	else
	   k = a;
	   
	return k;   
}

double f_equal(double a,double b){
	double l,result;
	double e = 0.000001;
	
	l = absolute_value(a-b)/min(absolute_value(a),absolute_value(b));
	
	if(l < e)
	  result = 1;
	else if(l >= e)
	  result = 0;
	  
	return result;
}
