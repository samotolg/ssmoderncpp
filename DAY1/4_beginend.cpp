// 4_beginend - 16 page
#include <vector>
#include <list>
#include <iostream>

int main()
{
	int x[5] = { 1, 2,3,4,5 };

	// auto : �캯�� ǥ������ �º��� Ÿ���� ������ �޶�.
	//		  ������ �ð��� ����
	auto n = x[0]; // "int n = x[0]"


//	std::vector<int> v = { 1,2,3,4,5 };
//	std::list<int>   v = { 1,2,3,4,5 };
	int v[5] = { 1,2,3,4,5 };

	// 1. C++98 ������ �ݺ��ڸ� ������ �ڵ�
	//  ���� : �����̳� ����� "�º��� �ݺ��� Ÿ���� ����"�ؾ� �Ѵ�.
//	std::vector<int>::iterator p1 = v.begin();
//	std::vector<int>::iterator p2 = v.end();

	// 2. C++11 ���ʹ� "�ݺ��� Ÿ���� ��Ȯ�� ����������� auto ���"�� �����մϴ�
//	auto p1 = v.begin();
//	auto p2 = v.end();	// error. raw array �� ����Լ��� �����ϴ�.

	// 3. �����̳� �� �ƴ϶� raw array �� ��� ����̶��
	//	  ��� �Լ� ���� �Ϲ��Լ� "begin" �� ����
	auto p1 = std::begin(v);
	auto p2 = std::end(v);  // v �� raw array �� ���� "int* p2"
}