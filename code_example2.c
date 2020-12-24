//두 정수 a,b가 주어졌을 때 a와b 사이에 속한 모든 정수의 합을 리턴하는 함수.
//예) a = 3, b = 5인 경우, 3+4+5 = 12이므로 12를 리턴.
//또는 a = 3, b = 10인경우 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10  = 112이므로 112를 리턴.
#include <stdio.h>
#if 1
int main()
{
	int a = 3;
	int b = 10;
	// 위의 예상 답은 2 + 3 + 4 + 5 = 14

	int i = 0;
	int v = 0;

	for (i = a; i <= b; i++) {
		printf("%d + ", i);
		v += i;
	}
	printf(" = %d", v);
	printf("\n");

	return 0;
}
#endif

#if 0
int solution(int a, int b)
{
	int i, min, max;
	int sum = 0;

	if (a < b) {
		min = a;
		max = b;
	}
	else {
		min = b;
		max = a;
	}

	for (i = min; i <= max; i++)
		sum += i;

	return sum;
}

int main(void)
{
	int a, b;
	int sum; /* 합 */

	printf("a 값 : "); scanf_s("%d", &a);
	printf("b 값 : "); scanf_s("%d", &b);

	printf("정수 a, b 사이의 모든 정수의 합은 %d입니다.\n", solution(a, b));

	return 0;
}
#endif