#include<stdio.h>
int main(void){
	int x,y;
	char ch;
	
	printf("���� �Է��Ͻÿ� :");
	scanf("%d %c %d",&x,&ch,&y);
	
	switch(ch){
		case '+':
			printf("%d %c %d = %d\n",x,ch,y,x+y);
			break;
		case '-':
			printf("%d %c %d = %d\n",x,ch,y,x-y);
			break;
		case '%':
			printf("%d %c %d = %d\n",x,ch,y,x/y);
			break;
		case 'x':
			printf("%d %c %d = %d\n",x,ch,y,x*y);
			break;
		default:
			printf("�������� �ʴ� �������Դϴ�");
			break;
	} 
	
	return 0;
}
