void f1(int* p) {}
void f2(char* p) {}

// std::nullptr_t ������ ����� ���ô�.

struct nullptr_t
{
	// ��ȯ�����ڴ� ��ȯ Ÿ���� ǥ������ �ʽ��ϴ�.
//	operator int*() { return 0; }
//	operator char*() { return 0; }

	// �Ʒ�ó�� �ϸ� ��� ������ �����ͷ� �Ͻ��� ����ȯ �����մϴ�. 
	template<typename T>
	operator T*() { return static_cast<T*>(0); }
};
nullptr_t mynullptr;

int main()
{
	f1(mynullptr);	// �����Ϸ��� mynullptr.operator int*() �� ã�� �˴ϴ�.
					// "��ȯ������" ��� �����Դϴ�.
	f2(mynullptr);	
}

// nullptr�� ����
// 1. boost ���̺귯������ ���� ���� ���� ���
// 2. C++ 11 ǥ�ؿ� �߰��ɶ��� "���Ͱ��� ����" �� �ƴ϶� "Ű����� �����"
//    std::nullptr_t��� Ÿ�Ե� �� ó�� ����������� �ƴ϶�, �����Ϸ��� �ν��ϴ�
//   ���� Ÿ��