
#include"stdio.h"
#include"stdlib.h"

void fun(int* p1, int* p2, int* s)
{
	s = (int*)malloc(sizeof(int));
	*s = *p1 + *(p2++);
	printf("fun函数中的s=%d\n",*s);
}


void main()
{
	int a[2] = {1,2 };
	int b[2] = { 3,4 };
	int* s = a;
	fun(a, b, s);
	printf("main函数中的s值=%d\n", *s);

}
