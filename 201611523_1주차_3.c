// ���� 3. ������(����, ����, ����) ������ �Է¹޾�, ������ ����� ����Ͻÿ�.
// ��3:
#include<stdio.h> 
int main(void)
{
int kor, eng, mat; 
//������ ��� ���� ����
int total;
float average ;
// �� �� �� �����Է�  
scanf("%d %d %d",&kor,&eng,&mat);	

	
printf("��=%d, ��=%d, ��=%d",kor,eng,mat);
	
	//����
	total = kor+eng+mat;
	
	//��� 
	average = total/3.0 ;
	
	// ������  
	printf("\ntotal:%d",total);
	printf("\naverage:%.1f",average);
	return 0;
}
