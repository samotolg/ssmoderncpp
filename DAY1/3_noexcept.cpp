// 3_noexcept - 14 page
#include <iostream>
#include <exception>

// noexcept Ű����� 2���� �� ���˴ϴ�.
// 1. �Լ� ���� �ڿ� �ٿ��� "���ܰ� ����"�� �˷� �ٶ� ���
// 2. noexcept(�Լ�ȣ���) ���� "�Լ� ȣ���"�� ���ܰ� ������ ����.

void foo()
{
}
void foo(int a, double d) noexcept   // �� �Լ��� ���ܰ� ���ٰ� �����Ϸ����� �˷� �ִ°�
{
}
void goo()  // ���� ���ɼ��� �ִٴ� �ǹ�.
{
}
int main()
{
	// �Լ��� ���� ���ɼ��� �ִ��� �����ϴ� ���
	bool b1 = noexcept(foo(0, 0.0 )); // �� ���� foo() �� ȣ��Ǵ� ���� �ƴ�
								// ���� ���ܰ��ɼ��� �ִ��� ����
								// foo ���� �ڿ� noexcept�� �ִ��� ����
	bool b2 = noexcept(goo());
	std::cout << b1 << std::endl; // 1
	std::cout << b2 << std::endl; // 0

	if (noexcept(foo(1, 3.4)))
	{
		// ���ܰ� ������, �׻� �����ϴ�.. foo ���
	}
	else
	{
		// ������ ���ɼ��� �ִ�
		// �� ��������, ������ �ٸ� �Լ� ���..
	}
}




