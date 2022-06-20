#include <list>

// STL ���� ��ӹ޴°��� ���� �ڵ�� �ƴմϴ�.
class MyList : public std::list<int>
{
public:
	void debug() {}  

	//C++98 ������ �ڵ�
	// ���ڷ� �������� ��� Ŭ������ �״�� ����
//	MyList(int sz) : std::list<int>(sz) {}
//	MyList(int sz, int value) : std::list<int>(sz, value) {}
//	MyList(std::initializer_list<int> e) : std::list<int>(e) {}

	// C++11 ���ʹ� ������ ����� ����ϸ� �� ó���� �ʿ� �����ϴ�.
	using std::list<int>::list;

};

int main()
{
	MyList st1(10, 3); // 10���� 3���� �ʱ�ȭ
	MyList st2(10);
	MyList st3 = { 1,2,3 }; // 
}






