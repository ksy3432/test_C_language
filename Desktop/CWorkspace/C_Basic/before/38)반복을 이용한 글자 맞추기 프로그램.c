//�ݺ��� �̿��� ���� ���߱� ���α׷�
#include<stdio.h>
int main(void){
	char ch;
	char answer = 'K';
	int count = 0;
	
	do
	{
	  printf("������ �Է��ϼ��� :");
	  scanf("%c",&ch);
	  count++; 
	  
	  if(ch < answer)
	   printf("���õ� ���ں��� �ƽ�Ű�ڵ� ���� �����ϴ�\n");
	   
	  if(ch > answer)
	   printf("���õ� ���ں��� �ƽ�Ű�ڵ� ���� �����ϴ�\n");
	}
	while(ch != answer);
	
	printf("�����Դϴ�!%d������ �����ϼ̽��ϴ�!\n",count);
	return 0;
} 
