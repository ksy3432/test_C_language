//�� ���� ���� �� ���� ū �� ���
int get_integer(void);
int get_larger(int x,int y,int z);

int main(void){
	int a,b,c;
	
	a = get_integer();
	b = get_integer();
	c = get_integer();
	
	printf("���� ū ���� %d�Դϴ�\n",get_larger(a,b,c));
	
	return 0;
} 

int get_integer(void){
	int n;
	
	printf("������ �Է��Ͻÿ� :");
	scanf("%d",&n);
	
	return n;
}

int get_larger(int x,int y,int z){
	int l;
	
	if(x>=y)
	  if(x>=z)
	      l = x;
	  else
	      l = z;
	else if(x<=y)
	  if(y<=z)
	    l = z;
	  else
	    l = y; 
	
	return l;
}
