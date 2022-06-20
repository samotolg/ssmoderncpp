#include <iostream>
#include <vector>

struct Point3D
{
	int x, y, z;
	// ����� ���� Ÿ��(�����̳�)�� range-for �� ��������
	// begin()/end()�� ������ �˴ϴ�.
	int* begin() { return &x; }		// 1��° ������ּ�
	int* end()   { return &z + 1; } // ������ ����� ���� �ּ� 
};

int main()
{
	Point3D p;
	p.x = 10;
	p.y = 20;
	p.z = 30;

	for (int n : p)  // �ɱ�� ? �ǰ��Ϸ��� �ʿ��� ���� ?
		std::cout << n << std::endl; 

}















