//���ĺ� �ҹ��ڸ� �Է¹޾� �빮�ڷ� �ٲٴ� ���α׷�
#include<stdio.h>
int main(void){
	char ch;
	
	while(1){
		printf("�ҹ��ڸ� �Է��ϼ��� :");
		scanf("%c",&ch);
		
		if(ch == 'Q')
		  break;
		
		if(ch < 'a' || ch > 'z')
		  continue;
		 
		ch -= 32;
		printf("��ȯ�� �빮�ڴ� %c�Դϴ�\n",ch);
	}
	
	return 0;
} 
