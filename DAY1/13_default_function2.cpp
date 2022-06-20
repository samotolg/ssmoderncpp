#include <iostream>
#include <type_traits>

// trivial ������ : �ƹ��ϵ� ���� �ʴ� �����ڸ� trivial �ϴٰ� �մϴ�.
//					����ڰ� ������ ��ü�� �����ϸ� trivial ���� �ʽ��ϴ�.

struct Point
{
	int x, y = 0;

	Point() = default; // �̷��� ����� trivial
//	Point() {}			// �̷��� ����� trivial ���� ����
};

int main()
{
	std::cout << std::is_trivially_default_constructible<Point>::value
		      << std::endl;

	Point pt{}; // ��� ����� 0���� �ش޶�� ��. - C++11���� �߰��� ����
				// "�ʱ�ȭ" ��ﶧ �ڼ��� ����
				// "��, �����ڰ� trivial �Ҷ��� 0����"

	std::cout << pt.x << std::endl;
}