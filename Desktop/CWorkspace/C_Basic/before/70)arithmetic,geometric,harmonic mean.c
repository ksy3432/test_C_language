//�� ������ ���,����,��ȭ ��� ���ϱ�
#include<stdio.h>
#include<math.h>

double arithmetic_mean(double x,double y);
double geometric_mean(double x,double y);
double harmonic_mean(double x,double y);

int main(void){
	double a,b;
	
	printf("ù ��° ������ �Է��Ͻÿ� :");
	scanf("%lf",&a);
	
	printf("�� ��° ������ �Է��Ͻÿ� :");
	scanf("%lf",&b);
	
	printf("��� ����� %f�Դϴ�\n",arithmetic_mean(a,b));
    printf("���� ����� %f�Դϴ�\n",geometric_mean(a,b));
	printf("��ȭ ����� %f�Դϴ�\n",harmonic_mean(a,b));
	 
	return 0;
} 
double arithmetic_mean(double x,double y){
	return (x+y/2);
}

double geometric_mean(double x,double y){
    return (sqrt(x*y)); 
}
double harmonic_mean(double x,double y){
    return (2*x*y/(x+y)); 
}

