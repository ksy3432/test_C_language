//�޷� ��� 
#include<stdio.h>
   
int main(void){
	int day,date;
	
	printf("********************\n");
	printf(" �� �� ȭ �� �� �� ��\n ");
	printf("*********************\n");
	
	for(day=0;day<1;day++)
		printf(" ");
		
	for(date=1;date<=31;date++){
		if(day==7){
			day = 0;
			printf("\n");
		}
		day++;
		printf(" %2d",date);
	}
	printf("\n=====================\n");
	
	return 0;
	}
	
	 
