//�Էµ� �������� �󵵸� ����ϴ� ���α׷�
int main(void){
	int score,i;
	int freq[101];
	
	for(i=0;i<101;i++)
	   freq[i] = 0;
	   
	while(1){
		printf("���ڸ� �Է��Ͻÿ�(-1�� �Է½� ����) :");
		scanf("%d",&score);

		if(score < 0)
		   break;
		   freq[score]++;
	}
	
	printf("����          ��\n");
	
	for(i=0;i<101;i++)
	   printf("%3d            %3d\n",i,freq[i]);
	   
	return 0;
} 
