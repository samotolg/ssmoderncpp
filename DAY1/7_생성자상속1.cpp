// 7_�����ڻ��1 - 26page
class Base
{
	int value;
public:
	Base()      : value(0) {}
	Base(int n) : value(n) {}
};
class Derived : public Base
{
public:
	// C++98 : �����ڸ� ��ӵ��� �ʴ´�.
	// C++11 : �Ʒ� ó���ϸ� ��ӵ˴ϴ�
	using Base::Base;
};

int main()
{
	// �Ʒ� 2���� ������ ������
	Derived d1;
	Derived d2(5);
}
