//�� �� ������ �Ÿ��� ���ϴ� ���α׷�
#include<stdio.h>
#include<math.h>

double dist_2d(double x1,double y1,double x2,double y2);

int main(void){
	double a,b,c,d;
	
	printf("ù ��° ��ǥ�� �Է��Ͻÿ� :");
	scanf("%lf %lf",&a,&b);
	
	printf("�� ��° ��ǥ�� �Է��Ͻÿ� :");
	scanf("%lf %lf",&c,&d)
	
	printf("�� �� ������ �Ÿ��� %lf�Դϴ�\n",dist_2d(a,b,c,d)); 
	
	return 0;
	
} 

double dist_2d(double x1,double y1,double x2,double y2){
	double s,x,y;
	x = x2 - x1;
	y = y2 - y1;
	s = x * x + y * y;
	return (sqrt(s));
}
