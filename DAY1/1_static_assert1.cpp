// 9:25 �� ���� ���� �մϴ�.
// https://github.com/codenuri/ssmoderncpp

#include <cassert>

// C++11 ���� ������ �ð� assert ����
static_assert( sizeof(int*) >= 8, "error, not 64 bit");

void foo(int age)
{
	// ���ǻ���. ���� ����� �ȵ˴ϴ�.
	//		    ������ �ð��� ���� ������ �͸� �����մϴ�.
	static_assert(age > 0, "error"); // error. ������ ���� �ȵ�

	// �Լ� ���ڸ� �ٷ� ������� ����
	// ���ڰ��� ��ȿ���� ���� Ȯ���ض�
	assert(age > 0); // ����ð� ����

	int* p = new int[age];

	delete[] p;
}
int main()    
{  
//	foo(-10);  // �Ǽ��� ���� ����  
	foo(10);
}

// ctrl + F5 �� Ȯ���غ�����
