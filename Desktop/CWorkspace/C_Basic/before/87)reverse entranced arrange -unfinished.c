//���ȣ��� �迭�� ����Ͽ� �Է��� ���ڸ� �������� ����ϴ� ���α׷�
#include<stdio.h>

int letter(void);
int reverse(void);
int convert(int n);
int number = 5;
int i;

int main(void){
	convert(3);
}

int convert(int n){
		
	printf("�Է��� �迭�� { ");
	
	for(i=0;i<number;i++)
	  printf(" %c",letter[i]);
	
	printf(" }�Դϴ�.");
	
	printf("�Է��� �迭�� { ");
	
	for(i=0;i>=number;i++)
	   printf(" %d",reverse[i]);
	
	printf(" }�Դϴ�.");
	
	return 0;
	
}

int letter(void){
	char ch[number];
	
	for(i=0;i<number;i++){
	printf("%d��° ���ڸ� �Է��Ͻÿ� :",i+1);
	scanf("%c",ch[i]);}
	   
	return ch[number];
}

int reverse(void){
	char reverse_ch[number];
	
	for(i=number-1;i>=0;i--)
	   reverse_ch[i]
	   
	return reverse_ch[number];
}
