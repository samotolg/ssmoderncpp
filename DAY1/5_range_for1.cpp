// 5_range_for1.cpp   21 page
#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v = { 1,2,3,4,5 };

	// �������� for ��
	for (int i = 0; i < v.size(); i++)
	{
	}

	// C++11 �� ���ο� for �� - range for
//	for (int   e : v )
//	for (auto  e : v)
	for (auto& e : v) // STL �����̳� �� �ƴ϶� �迭�� ����
	{
		e = 0; // �̷��� �����Ϸ��� reference��!
		std::cout << e << ", ";
	}
	std::cout << std::endl;
}

















