//�ֻ����� ������ �� ���� ������ Ƚ�� ��� 
#include<stdio.h>
#include<stdlib.h>

int main(void){
	int i;
	int freq[6];
	
	for(i=0;i<10000;i++)
	  ++freq[rand()%6];
	  
	printf("=================\n");
	printf("  ��         ��\n");
	printf("=================\n");
	
	for(i=0;i<6;i++)
	   printf("%3d          %3d\n",i,freq[i]);
	   
	return 0; 
	} 
