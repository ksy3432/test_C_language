//������
#include<stdio.h>
#include<stdlib.h>
int save(int amount);
int total = 0;
int amount;

int main(void){
	
   while(1){
	   save(amount);
   }
} 

int save(int amount){
	printf("�󸶸� �����Ͻðڽ��ϱ�?(-1�� �Է��ϸ� ����) :");
	scanf("%d",&amount);
	
	if(amount > 0){
	total += amount;
	printf("�� ������� %d�Դϴ�\n",total);
    }
    
    else if(amount < 0)
      exit(0);
	
	return 0;
	
}
