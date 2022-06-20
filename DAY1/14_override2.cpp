#include <iostream>

const int c1 = 10;
int const c2 = 20;

template<typename T>
class Base
{
public:
	// �Ʒ� ���ڴ� _arg_ �� const �Դϴ�.
	virtual void foo(const T arg) {	std::cout << "Base foo" << std::endl;	}

	virtual void goo(T const arg) { std::cout << "Base goo" << std::endl; }
	
	// �Ʒ� 2���� �����մϴ�
	// const T arg  => �̷��� ���� ����ϴµ�
	// T const arg  => �� �ڵ带 �����ϴ� ����� �����ϴ�.
};


class Derived : public Base<int*>
{
public:
	// �Ʒ� �ڵ�� _arg_ �� const �ƴմϴ�.
	// �Ʒ� �ڵ�� _arg_ �� ���󰡸� const �Դϴ�
	//virtual void foo(const int* arg) // override 

	// �Ʒ� �ڵ尡 _arg_ �� const �Դϴ�
	virtual void foo(int* const arg)  override 
	{
		std::cout << "Derived foo" << std::endl;
	}

	virtual void goo(int* const arg) { std::cout << "Derived goo" << std::endl; }

};

int main()
{
	Base<int*>* p = new Derived;
	p->foo(0); // "Derived foo" ������ �����Լ� �������� ������
				// override ������ ���� �غ�����.
}


