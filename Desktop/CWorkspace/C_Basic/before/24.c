//�Է��ϴ� ���ڿ� ���� �ٸ� ������ ���̸� ����ϴ� ���α׷� 
#include<stdio.h>
int main(void){
	char shape;
	float r,h;
	
	printf("������ ����� ������ ���ÿ�(�簢��R,��C,�ﰢ��T) :");
	scanf("%c",&shape);
	
	switch(shape){
		case 'R':
			printf("�簢���� ���ο� ���θ� �Է��Ͻÿ� :");
			scanf("%f,%f",&r,&h);
			printf("���ΰ� %f�̰� ���ΰ� %f�� �簢���� ���̴� %f�̴�",r,h,r*h);
			break;
			
		case 'T':
		    printf("�ﰢ���� ���ο� ���θ� �Է��Ͻÿ� :");
			scanf("%f,%f",&r,&h);
			printf("���ΰ� %f�̰� ���ΰ� %f�� �ﰢ���� ���̴� %f�̴�",r,h,(r*h)*0.5);
			break; 
		case 'C':
		    printf("���� �������� �Է��Ͻÿ� :");
			scanf("%f",&r);
			printf("�������� %f�� ���� ���̴� %f�Դϴ�",r,r*r*3.14);
			break;
		default:
		    printf("�������� �ʴ� �Է��Դϴ�");
			break; 
	}
	return 0; 
} 

