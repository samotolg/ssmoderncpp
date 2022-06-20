//8_nullptr3
#include <iostream>

void foo(int)    { std::cout << "int" << std::endl; }
void foo(double) { std::cout << "double" << std::endl; }
void foo(bool)   { std::cout << "bool" << std::endl; }
void foo(char*)  { std::cout << "char*" << std::endl; }

int main()
{
	foo(0);   // int.   0 �� ������(int) ���ͷ� �̹Ƿ�
	foo(0.0); // double. 0.0 �� �Ǽ��� ���ͷ� �̹Ƿ�
	foo(false); // bool. false �� bool �� ���ͷ� (Ű����)
	foo(nullptr); // char*,  nullptr�� �������� ���ͷ�(Ű����)

	// ��� ���ͷ��� Ÿ���� �ֽ��ϴ�
	10; // int
	3.4; // double
	true; // bool
	nullptr; // std::nullptr_t ��� Ÿ��
			 // std::nullptr_t ��� Ÿ���� ��� ������ �����ͷ� �Ͻ��� ��ȯ ����

	std::nullptr_t null = nullptr;

	int* p2 = null; // ���� null�� nullptr �� ����
}







