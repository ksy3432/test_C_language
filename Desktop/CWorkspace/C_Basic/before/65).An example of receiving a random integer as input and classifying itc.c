//������ �Է¹޾� �з��ϴ� �Լ�
#include<stdio.h>
#include<stdlib.h>

int even(int n);
int absolute(int n);
int sign(int n);

int main(void){
	int n;
	
	printf("������ �Է��Ͻÿ� :");
	scanf("%d",&n);
	
	switch(even(n)){
		case 0:
			printf("�־��� ������ Ȧ���Դϴ�\n");
			break;
		case 1 :
			printf("�־��� ������ ¦���Դϴ�\n");
			break;
	}
	
	printf("�־��� ������ ���밪�� %d�Դϴ�\n",absolute(n));
	
	if(sign(n)<0)
	   printf("�־��� ������ �����Դϴ�\n");
	else if(sign(n)==0)
	   printf("�־��� ������ 0�Դϴ�\n");
	else if(sign(n)>0)
	   printf("�־��� ������ ����Դϴ�\n");
	   
	return 0; 
} 

int even(int n){
	if(n%2 == 0)
       n = 1;
   	else if(n%2 == 1)
       n = 0;
       
    return n;
}

int absolute(int n){
	return abs(n);
}

int sign(int n){
	if(n<0)
	  n = -1;
	else if(n==0)
	  n = 0;
	else if(n>0)
	  n = 1;
	  
    return n;
}
