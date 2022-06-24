#include <iostream>

int hoo(int a) { return -a; }

void goo(int a, int b, int c) {}

template<typename ... Types>
void foo(Types ... args)
{
	// args : 1, 2, 3

//	goo(args); // error. pack �� ���� �Լ� ���ڷ� ����Ҽ� ����.

	// pack expansion : pack �� ��� ��Ҹ� , �� ����ؼ� Ǯ�� �޶�� ��
	goo(args...); // goo(E1, E2, E3); 

}


int main()
{
	foo(1, 2, 3);
}
