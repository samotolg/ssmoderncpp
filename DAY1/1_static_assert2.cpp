// static_assert : �ݵ�� �ʿ��� ������ �ƴմϴ�.
//				   ������ ����ϸ� , �ڵ尡 ������ ���ϴ�.
//				  ������ �ð����� ���ǹǷ�
//					=> "���� �ڵ尡 �������� �ʽ��ϴ�."
//					=> ����� �������� �����ϴ�.

#include <iostream>
#include <type_traits> 

//#pragma pack(1)	// ����ü align �� 1�� �� �޶�.
struct PACKET
{
	char cmd;
	int  data;
};

//static_assert(sizeof(PACKET) == sizeof(char) + sizeof(int),
//				"error, packet has unexpected padding");

/*
int main()
{
	std::cout << sizeof(PACKET) << std::endl; // ?
}
*/


template<typename T> void object_set_zero(T* p)
{
	// std::is_polymorphic<T>::value : T Ÿ���� �����Լ��� �ִ��� ����
	//									=> ����ϳ� ���� ���
	static_assert(!std::is_polymorphic<T>::value, 
					"error, T has virtual function");

	memset(p, 0, sizeof(T)); // ������ �ڵ� �ϱ�� ?
}

class A
{
	int data;
	
	virtual void foo() {}
};
int main()
{
	A a;
	object_set_zero(&a);
}





