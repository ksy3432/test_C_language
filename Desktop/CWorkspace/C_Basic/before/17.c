#include<stdio.h>
int main(void){
	int x,y;
	
	printf("x��ǥ�� ���� �Է��Ͻÿ� :");
	scanf("%d",&x);
	
	printf("y��ǥ�� ���� �Է��Ͻÿ� : ");
	scanf("%d",&y);
	
	x>0? (y>0 ? printf("�� ��ǥ�� 1��и鿡 ��ġ�մϴ�") : printf("�� ��ǥ�� 4��и鿡 ��ġ�մϴ�")) : y>0 ? printf("�� ��ǥ�� 2��и鿡 ��ġ�մϴ�") : printf("�� ��ǥ�� 3��и鿡 ��ġ�մ�"); 
}
