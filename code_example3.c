//정수를 담고 있는 배열 arr의 평균 값을 return하는 함수.
//arr은 길이 1이상, 100이하의 배열
//arr 원소는 -10,000이상 10,000이하인 정수.
//예) 1,2,3,4 평균 : 2.5
//5,5 평균 5
#include <stdio.h>
double avg() 
{
	int arr[4] = { 1,2,3,4 };
	int i;

	int num = 0;

	for (i = 0; i < 4; i++) {
		num += arr[i];
	}
	printf("num = %d\n", num);
	return (double)num / 4;
}

int main()
{
	printf("return :%.1lf\n", avg());
}