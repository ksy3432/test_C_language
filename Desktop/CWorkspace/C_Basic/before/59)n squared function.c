//������ ������ ����ϴ� �Լ� ���� 
#include<stdio.h>

int square(int n);

int main(void){
	int i,result;
	
	for(i=0;i<5;i++){
		result = square(i);
		printf("%d�� ���� : %d\n",i,result);
	}
	
	return 0; 
}

int square(int n){
	return n*n;
}
