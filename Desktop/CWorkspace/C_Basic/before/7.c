/*��ġ�� ��Ƽ���ͷ� ��ȯ��Ű�� ���α׷�*/
#include<stdio.h>
int main(void){
	int inch;
	int centimeter;
	
	printf("��ġ���� �Է��Ͻÿ� :");
	scanf("%d",&inch);
	
	centimeter = 2.54 * inch;
	
	printf("%d ��ġ�� %d ��Ƽ���Ϳ� ����\n",inch,centimeter);
	
	return 0; 
}
