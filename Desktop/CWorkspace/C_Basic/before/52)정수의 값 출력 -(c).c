//3�� �ǳʶٸ鼭 ������ ���� ����ϴ� ���α׷� -(c)
#include<stdio.h>
int main(void){
	int i =1;
	
	do{
		if(i % 3 == 1){
			printf("%d\n",i);
			i++;
		}
		else if(i % 3 != 1)
		    i++;
	}while(i<100);
	
	return 0;
}

