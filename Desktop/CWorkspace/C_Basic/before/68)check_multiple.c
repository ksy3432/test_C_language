//��� Ȯ�� ���α׷�
#include<stdio.h>

int get_integer(void);
int check_multiple(int x,int y);

int main(void){
	int a,b;
	
	a = get_integer();
	b = get_integer();
	
	switch(check_multiple(a,b)){
		case 0:
			printf("%d�� %d�� ����Դϴ�\n",b,a);
			break;
		case 1:
			printf("%d�� %d�� ����� �ƴմϴ�\n",b,a);
			break;
		default :
		    printf("�߸��� �����Դϴ�");
			break; 
	}
	
	return 0;
} 

int get_integer(void){
	int n;
	
	printf("������ �Է��Ͻÿ� :");
	scanf("%d",&n);
	
	return n;
}

int check_multiple(int x,int y){
	int result;
	
    if (y % x == 0)
       result = 0;
    else
       result = 1;
       
    return result;
}
