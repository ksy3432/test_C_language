#include<stdio.h>

int main(void){
	int x,y;
	char ch;
	
	printf("������ �Է��Ͻÿ� :");
	scanf("%d %c %d",&x,&ch,&y);
	
    if(ch == '+')
	 printf("%d %c %d = %d",x,ch,y,x+y);

    else if(ch == '-')
	 printf("%d %c %d = %d",x,ch,y,x-y);
	
	else if(ch == '%')
	 printf("%d %c %d = %d",x,ch,y,x/y);
	 
	else if(ch == 'x')
	 printf("%d %c %d = %d",x,ch,y,x*y);
	 
	else
	 printf("�������� �ʴ� ��ȣ�Դϴ�");
	 
	
	return 0; 
}
