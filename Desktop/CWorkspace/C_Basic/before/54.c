//����ڰ� �Է��� ������ �ڸ����� �ݴ�� �ٲٴ� ���α׷� 
#include<stdio.h>
int main(void){
	int n,i,count,m,k;
	
	printf("������ �Է��Ͻÿ� :");
	scanf("%d",&n);
	printf("�Է��� ������ �� �ڸ� ������ �Է��Ͻÿ� :");
	scanf("%d",&m);
	
	for(i=0; i<=m ;i++){
	    
		if(i == 0)
	      {
		  count = n % 10;
		  printf("%d\n",count);
		  i++;}
		
		else if(i != 0)
		  {
		  count = n / (10 * k) % 10; //i�� 10�� i�������� ǥ���ؾ� �ϴµ� �� �𸣰��� 
		  printf("%d\n",count);
		  i++;}
		  
		  //��ư ����ϸ� �� 
        
    }
    
    return 0;
	}

	
