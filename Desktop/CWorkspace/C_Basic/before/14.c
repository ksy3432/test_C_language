#include<stdio.h>
int main(void){
	int computer_science,c_language,english,general_math,average;
	
	printf("��ǻ�� ���� ������ ������ �Է��Ͻÿ� : ");
	scanf("%d",&computer_science);
	
	printf("c��� ���α׷��� ������ ������ �Է��Ͻÿ� : ");
	scanf("%d",&c_language);

    printf("���� ������ ������ �Է��Ͻÿ� : ");
	scanf("%d",&english);
	
	printf("�Ϲ� ���� ������ ������ �Է��Ͻÿ� : ");
	scanf("%d",&general_math);
	
	average = (computer_science+c_language+english+general_math)/4;
	printf("��� ������ %d �Դϴ�",average);
	
	return 0; 
			
}
