//����ڷκ��� ���� 3���� �Է¹޾� ���� ���� ���� ���ϴ� ���α׷� 
int main(void){
	int x,y,z,n;
	
	printf("������ �� �� �Է��Ͻÿ� : ");
	scanf("%d,%d,%d",&x,&y,&z);
	
	n = (x>y)?(y>z)?z:y:(x<y)?(x>z)?z:x
	
	printf("���� ���� ������ %d�Դϴ�",n);
	
	return 0;
}
