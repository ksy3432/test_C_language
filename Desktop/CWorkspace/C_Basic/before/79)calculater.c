//��Ģ������ �����ϴ� ����� 
#include<stdio.h>

int plus(int x,int y);
int minus(int x,int y);
int multiply(int x,int y);
int divide(int x,int y);

count = 0;
int n;

int main(void){
	calculater(5);
}

int calculater(int n){
	int a,b;
	char op;
	
	printf("������� �Է��Ͻÿ� :");
	scanf("%d%c%d",&a,&op,&b);
	
	if(op == '+')
	  plus(a,b);
	else if(op == '-')
	  minus(a,b);
	else if(op == 'x')
	  multiply(a,b);
	else if(op == '%')
	  divide(a,b);
	else
	  printf("�����Ǵ� �����ڰ� �ƴմϴ�\n������ ����ϴ�");
	  
    return 0;
}


int plus(int x,int y){
	if(x!=0 && y!=0)
	  {
	  printf("��� ���: %d\n",x+y);
	  static count;
	  count++;
	  printf("������ ��� Ƚ�� :%d\n",count);
	  n--;
	  return calculater(n-1);}
}

int minus(int x,int y){
	if(x!=0 && y!=0)
	  {
	  printf("��� ��� :%d\n",x-y);
	  static count;
	  count++;
	  printf("������ �� ��� Ƚ�� :%d\n",count);
	  n--;
	  return calculater(n-1);}
}

int multiply(int x,int y){
	if(x!=0 && y!=0)
	  {printf("��� ��� :%d\n",x*y);
	  static count;
	  count++;
	  printf("������ �� ��� Ƚ�� :%d\n",count);
	  n--;
	  return calculater(n-1);
	  }
}

int divide(int x,int y){
	if(x!=0 && y!=0)
	 { printf("��� ��� :%d\n",x/y);
	  static count;
	  count++;
	  printf("�������� �� ��� Ƚ�� :%d\n",count);
	  n--;
	  return calculater(n-1);
	 }
}
