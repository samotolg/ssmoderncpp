#include <unordered_set>

// C ��Ÿ�� �ڵ� - typedef 
//typedef int DWORD;
//typedef void(*F)(); 

// C++11 ���ʹ� ���ڵ� ��� �Ʒ� ó���ص� �˴ϴ�.
// �Ʒ� 2���� �� 2�ٰ� �Ϻ��� �����մϴ�.
using DWORD = int;
using F = void(*)();

int main()
{
	DWORD n; // int n
	F     f; // void(*f)()  �Լ������� ����
}