/*
// �Ʒ� �ڵ尡 �� �������� ������ ������ ?
class A
{
	int data;
public:
	void foo()
	{
		*data = 10; // error. int Ÿ���� * �Ҽ� ����.
	}
};
int main()
{
	A a;
}
*/

template<typename T>
class A
{
	T data;
public:
	void foo()
	{
		*data = 10; 
	}
};
int main()
{
	A<int> a;

	a.foo();
}
// �ٽ� : "������ �ν��Ͻ�ȭ(lazy instantiation)"
//      => Ŭ���� ���ø����� ���� ��� �Լ��� C++�ڵ�� �����ȴ�.
//		=> C++98 ���� ���� �ִ� ����









