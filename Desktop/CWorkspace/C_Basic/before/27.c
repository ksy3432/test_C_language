#include<stdio.h>
int main(void){
	int vote;
	
	printf("1~10������ �� �� �ϳ��� �Է��ϼ��� :");
	scanf("%d",&vote);
	
	switch(vote){
		case 2:
			printf("�����մϴ�!1� ��÷�Ǿ����ϴ�!");
			break;
		case 5:
			printf("�����մϴ�!2� ��÷�Ǿ����ϴ�!");
			break;
		case 7:
			printf("�����մϴ�!3� ��÷�Ǿ����ϴ�!");
			break;
		default:
		    printf("�ƽ��Ե� ���̱���!���� ��ȸ�� ���������!");
			break; 
	} 
	return 0; 
}
