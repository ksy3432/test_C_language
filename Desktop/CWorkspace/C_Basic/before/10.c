#include<stdio.h>
int main(void){
	int input_money;
	int price;
	int vat;
	int output_money;
	
	printf("���� �� : ");
	scanf("%d",&input_money);
	
	printf("��ǰ�� �Ѿ� : \n");
	scanf("%d",&price);
	
	vat = price*0.1;
	printf("�ΰ��� : %d\n",vat);
	
	output_money = input_money - price;
	printf("�ܵ� : %d",output_money);
	
	return 0;
	
	 
} 
