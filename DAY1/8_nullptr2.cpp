// 8_nullptr2
#include <iostream>

// �� nullptr�� ������� ?
void foo(int* p)   { std::cout << "int*" << std::endl; }

template<typename F, typename T>
void logAndCall(F f, T arg)	// int arg = 0
{							// std::nullptr_t arg = nullptr;
	// logging �ϰ�
	f(arg);
}
int main()
{
	int n = 0;
	foo(0); // ok.  ���ͷ� 0 �� �����ͷ� ��ȯ�ǰ�
//	foo(n); // error. 0�� ���� ������ ������ ������ ��ȯ �ȵ�

//	logAndCall(foo, 0); // �ǵ��� foo(0), ������ error
						// T arg = 0 ���� 0���� �߷��ϹǷ�
						// int arg = 0
						// foo(arg) �̹Ƿ� error
	logAndCall(foo, nullptr);
}







