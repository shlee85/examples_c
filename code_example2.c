//�� ���� a,b�� �־����� �� a��b ���̿� ���� ��� ������ ���� �����ϴ� �Լ�.
//��) a = 3, b = 5�� ���, 3+4+5 = 12�̹Ƿ� 12�� ����.
//�Ǵ� a = 3, b = 10�ΰ�� 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10  = 112�̹Ƿ� 112�� ����.
#include <stdio.h>
#if 1
int main()
{
	int a = 3;
	int b = 10;
	// ���� ���� ���� 2 + 3 + 4 + 5 = 14

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
	int sum; /* �� */

	printf("a �� : "); scanf_s("%d", &a);
	printf("b �� : "); scanf_s("%d", &b);

	printf("���� a, b ������ ��� ������ ���� %d�Դϴ�.\n", solution(a, b));

	return 0;
}
#endif