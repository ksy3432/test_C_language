//�������� ���� ���� �Լ��� �̿��Ͽ� �����ϴ� ���� 
#include<stdio.h>
int integeter(void);
int factorial(int n);
int combination(int n,int r);

int main(void){
	int a,b;

	a = integeter();
	b = integeter();
	
	printf("c(%d,%d)�� ���� %d �Դϴ�\n",a,b,combination(a,b));
	
	return 0; 
} 

int integeter(void){
	int k;
	
	printf("������ �Է��Ͻÿ� :");
	scanf("%d",&k);
	
	return k;
}

int factorial(int n){
	int i;
	long result = 1;
	
	for(i=1;i<=n;i++)
	   result *= i;
	   
	return result;
}

int combination(int n,int r){
	return factorial(n)/(factorial(n-r)*factorial(r));
}
