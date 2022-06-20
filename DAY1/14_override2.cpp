#include <iostream>

template<typename T>
class Base
{
public:
	virtual void foo(const T arg)
	{
		std::cout << "Base foo" << std::endl;
	}
};

class Derived : public Base<int*>
{
public:
};
int main()
{
	Base<int*>* p = new Derived;
	p->foo(0); // "Derived foo" ������ �����Լ� �������� ������
				// override ������ ���� �غ�����.
}

