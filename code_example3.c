//������ ��� �ִ� �迭 arr�� ��� ���� return�ϴ� �Լ�.
//arr�� ���� 1�̻�, 100������ �迭
//arr ���Ҵ� -10,000�̻� 10,000������ ����.
//��) 1,2,3,4 ��� : 2.5
//5,5 ��� 5
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