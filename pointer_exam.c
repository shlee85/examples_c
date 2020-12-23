// 포인터의 개념을 다시 정리해 본다.
#include <stdio.h>

int main(int argc, char** argv)
{
	int** d_p = NULL;
	int* p = NULL;
	int a;
	a = 2;

	p = &a;

	//주소 출력은 p or X(x는 소문자, X는 대문자로 주소가 출력) - 16진수
	printf("[0x%p]\n", &a);	
	printf("[0x%X]\n", &a);

	printf("포인터 p에 들어가 있는 값 : %p, 포인터 p에 들어가 있는 데이터 : %d\n", p, *p);
	printf("int 변수 a가 저장된 주소 : %p, a의 값 : %d\n", &a, a);

	*p = 10;
	printf("a의 값 : %d:%p, p의 값 : %d:%p \n", a, &a, *p, p);

	d_p = &p;

	printf("d_p의 저장된 포인터의 p의 주소 : %p, 값 : %d\n", d_p, **d_p);

	return 0;
}