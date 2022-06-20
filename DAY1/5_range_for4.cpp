#include <iostream>
#include <vector>

// C++20 ���� �Ʒ��� ������ Ŭ������ ǥ�ؿ� �߰��˴ϴ�.
// �� ������ ������
class take_view
{
	std::vector<int>& cont;
	int count;
public:
	take_view(std::vector<int>& v, int c) : cont(v), count(c) {}

	auto begin() { return cont.begin(); }
	auto end()   { return cont.end(); }
};
int main()
{
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	take_view tv(v, 3);

	for (auto e : tv)
		std::cout << e << std::endl;


}