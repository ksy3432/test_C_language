//����ڰ� �Է��� ������ ���� ���ϴ� ���α׷�-(b)
#include<stdio.h>
int main(void){
	int count,i,n,sum;
	
	n = 1;
	sum = 0;
	
	printf("���� ������ ������ �Է��Ͻÿ� :");
	scanf("%d",&count);
	
	for(n=1;n<=count;n++)
    {
	 printf("%d��° ������ �Է��Ͻÿ� :",n);
	 scanf("%d",&i);
		
		
	 sum += i;}
	 
	printf("����ڰ� �Է��� ������ �� : %d",sum);
	
	return 0;
}
