//���� �ﰢ���� �غ��� ���̸� �̿��Ͽ� ������ �밢���� ���̸� ���ϴ� ���� 
#include<stdio.h>
#include<math.h>

#define radian (45.0/atan(1))

int main(void){
	double h,w,r,seta;
	
	printf("�غ��� ���̸� �Է��Ͻÿ� :");
	scanf("%1f %1f",&w,&h);
	
	r = sqrt(w * w + h * h);
	seta = radian * atan2(h,w);
	
	printf("������ %f�̰� ������ ���̴� %f�Դϴ�\n",seta,r);
	
}

