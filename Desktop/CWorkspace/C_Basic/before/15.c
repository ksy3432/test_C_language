#include<stdio.h>
int main(void){
	float km,m,s,v;
	
	printf("�޸� �Ÿ��� �Է��Ͻÿ�(kmh) :");
	scanf("%f",&km);
	
	printf("�޸� �ð� �߿��� ���� �Է��Ͻÿ� :");
	scanf("%f",&m);
	
	printf("�޸� �ð� �߿��� �ʸ� �Է��Ͻÿ� :");
	scanf("%f",&s);
	
	v = km/(m/60.0 +s/3600.0);
	printf("��� �ӵ��� %f km/h�Դϴ�",v);
}
