class Base
{
public:
	virtual void foo() {}
	virtual void goo(int a) {}
	virtual void hoo() {}
};

class Derived : public Base
{
public:
	virtual void foo()      override final {}  // �� �̻� ������ �Ҽ�����.
	virtual void goo(int a) override {}
	virtual void hoo()      override {}
};

class Derived2 final : public Derived  // ���̻� �Ļ� Ŭ���� ����� ����.
{
public:
	//virtual void foo()      override {}  // error.
	virtual void goo(int a) override {}
};

class Derived3 : public Derived2 // error
{
};
int main()
{
}
