// 13_default_function - 41 page
#include <type_traits>
#include <iostream>

class Point
{
	int x, y;
public:
	// �ƹ��ϵ� ���� �ʴ� ����Ʈ �����ڸ� ����� ���
//	Point() {}			// 1. ����ڰ� ���� ����
	Point() = default;	// 2. �����Ϸ����� ��û

	Point(int a, int b) {}
};

int main()
{
	Point p1;
	Point p2(1, 2); // ok
}



