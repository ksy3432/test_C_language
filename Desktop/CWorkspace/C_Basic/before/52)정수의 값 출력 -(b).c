//3�� �ǳʶٸ鼭 ������ ���� ����ϴ� ���α׷� -(b)
#include<stdio.h>
int main(void){
	int i=1;
	
	for(i=1;i<100;i++){
		if(i % 3 == 1)
		   {
		   printf("%d\n",i);
		   i++;}
		else if(i % 3 != 1)
		   i++;
	}
	
	return 0;
}
