#include <unordered_set>

//typedef std::unordered_set<int> useti;
//typedef std::unordered_set<double> usetd;

// std::unordered_set<int> �� ������ �ƴ϶�(Ÿ���� ������ �ƴ϶�)
// std::unordered_set      �� ������ ����� ������ ?(���ø��� ����)

//typedef std::unordered_set  USET; // �̷���!!! 
								  // �׷���, �ȵȴ�.(error)

// typedef : Ÿ�Կ� ���� ����
// using   : Ÿ�Կ� ���� ���� + ���ø��� ���� ����

using DWORD = int; // Ÿ�Կ� ���� ����
using useti = std::unordered_set<int>; // Ÿ�� ����

template<typename T>
using uset = std::unordered_set<T>;

int main()
{
//	std::unordered_set<int>    s1;
//	std::unordered_set<double> s2;
	useti s1;

	uset<int> s2;
	uset<double> s3;
}


