//����ڷκ��� �ϳ��� ���ڸ� �Է¹޾� �빮�ڴ� �ҹ��ڷ� �ҹ��ڴ� �빮�ڷ� �ٲٴ� ���α׷�
#include<stdio.h>
int main(void){
	char ch;
	
	printf("���ڸ� �ϳ� �Է��Ͻÿ� : ");
	scanf("%c",&ch);
	
	if(ch >= 'A' &&  ch <= 'Z'){
		printf("�Է��Ͻ� ������ %c�� �빮���̰� %c�� �ٲ�ϴ�",ch,ch-'A'+'a');
	}
	else if(ch >= 'a' && ch <= 'z'){
		printf("�Է��Ͻ� ������ %c�� �ҹ����̰� %c�� �ٲ�ϴ�",ch,ch+'A'-'a');
		}
	else {
		printf("�߸��� �Է��Դϴ�.���ڸ� �Է����ּ���");
	}
			
	return 0; 
}
 
