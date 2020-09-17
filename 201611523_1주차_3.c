// 문제 3. 세과목(국어, 영어, 수학) 점수를 입력받아, 총점과 평균을 출력하시오.
// 답3:
#include<stdio.h> 
int main(void)
{
int kor, eng, mat; 
//총점과 평균 변수 선언
int total;
float average ;
// 국 영 수 점수입력  
scanf("%d %d %d",&kor,&eng,&mat);	

	
printf("국=%d, 영=%d, 수=%d",kor,eng,mat);
	
	//총점
	total = kor+eng+mat;
	
	//평균 
	average = total/3.0 ;
	
	// 결과출력  
	printf("\ntotal:%d",total);
	printf("\naverage:%.1f",average);
	return 0;
}
