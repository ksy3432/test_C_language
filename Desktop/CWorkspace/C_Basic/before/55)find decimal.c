//2�� 100 ���̿� �ִ� ��� �Ҽ��� ã�� ���α׷�
#include<stdio.h>
int main(void){
	int i;
	
	for(i=2;i<=100;i++){
		if(i==2||i==3||i==5)
		   printf("%d\n",i);
		   
		if(i%2 != 0)
		   if(i%3 != 0)
		      if(i%5 != 0)
		         printf("%d\n",i);
	}
	
	return 0;
} 
