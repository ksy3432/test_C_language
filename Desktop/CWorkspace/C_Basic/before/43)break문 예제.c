//break�� �̿��Ͽ� �ݺ����� Ż���Ѵ� 
#include<stdio.h>
int main(void){
	float grade,sum = 0.0,average;
	int count = 0;
	
	while(1){
		printf("�л��� ������ �Է��Ͻÿ� :");
		scanf("%d",&grade);
	
		if(grade < 0.0)
		   break;
			
		count++;
		sum += grade;
		
	}
	
	average = sum / count;
	printf("�л����� ������ %f�Դϴ�\n",average);
	
	return 0;
}
