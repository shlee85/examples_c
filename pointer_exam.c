// �������� ������ �ٽ� ������ ����.
#include <stdio.h>

int main(int argc, char** argv)
{
	int** d_p = NULL;
	int* p = NULL;
	int a;
	a = 2;

	p = &a;

	//�ּ� ����� p or X(x�� �ҹ���, X�� �빮�ڷ� �ּҰ� ���) - 16����
	printf("[0x%p]\n", &a);	
	printf("[0x%X]\n", &a);

	printf("������ p�� �� �ִ� �� : %p, ������ p�� �� �ִ� ������ : %d\n", p, *p);
	printf("int ���� a�� ����� �ּ� : %p, a�� �� : %d\n", &a, a);

	*p = 10;
	printf("a�� �� : %d:%p, p�� �� : %d:%p \n", a, &a, *p, p);

	d_p = &p;

	printf("d_p�� ����� �������� p�� �ּ� : %p, �� : %d\n", d_p, **d_p);

	return 0;
}