//2�� �������� ���� ���ϴ� ���α׷�
#include<stdio.h>
#include<math.h>

double quad_eqn1(double a,double b,double c);
double quad_eqn2(double a,double b,double c);

int main(void){
	double a,b,c;
	
	printf("a :");
	scanf("%lf",&a);
	printf("b :");
	scanf("%lf",&b); 
	printf("c :");
	scanf("%lf",&c);
	
	if(b*b - 4*a*c >= 0)
	  printf("���� %f �� %f �Դϴ�\n",quad_eqn1(a,b,c),quad_eqn2(a,b,c));
	
	else
	  printf("�Ǳ��� �������� �ʽ��ϴ�\n");
	  
	return 0;  
} 

double quad_eqn1(double a,double b,double c){
	double s;
		
	 if(b*b - 4*a*c >= 0)
	    s = ((-b+sqrt(b*b-4*a*c))/(2*a));
	   
	return s;
	   
}

double quad_eqn2(double a,double b,double c){
	double s;
		
	 if(b*b - 4*a*c >= 0)
	    s = ((-b-sqrt(b*b-4*a*c))/(2*a));
	   
	return s;
	   
}
 
