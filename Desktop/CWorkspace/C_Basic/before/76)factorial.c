//����Լ��� �̿��� ���丮��
long factorial(int n){
	printf("factorial(%d)",n);
	if(n<=1) return 1;
	else return n*factorial(n-1);
} 

int main(void){
 int n;
 printf("������ �Է��Ͻÿ� : \n");
 scanf("%d",n);
 
 printf("%d",factorial(n));
 
 return 0;
 }
