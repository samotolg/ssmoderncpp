#include <iostream>

class Meter
{
	int value;
public:
	Meter(int n) : value(n) {}
};

//������ ���ͷ��ڿ� ���̴� ��� �ݵ�� ����Ÿ���� �Ʒ�ó���ؾ� �մϴ�.
Meter operator""_m(unsigned long long value)
{
	Meter m(value);
	return m;
}
int main()
{
	Meter n1 = 3_m; // operator""_m(3)
}