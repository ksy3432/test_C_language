//�迭�� �Է¹޾� �������� ����ϴ� ���α׷�
#include<stdio.h>
int main(void){
	int i;
	int arrange[5];
	
	for(i=0;i<5;i++){
		printf("�迭�� %d��° ���Ҹ� �Է��Ͻÿ� :",i+1);
		scanf("%d",&arrange[i]);
	}
	
	printf("�Էµ� �迭�� �������� ����ϸ�  {");
	
	for(i=4;i>=0;i--)
	    printf(" %d",arrange[i]);
	    
	printf(" } �Դϴ�.");
	 
	return 0;
} 
