// 12_delete_function 37 page

int gcd(int a, int b) 
{
	// �ִ� ����� ��ȯ
	return 0;
}

//double gcd(double a, double b); // �ٽ�. �ǵ������� ���� ����
								//	     ���� ����
						// ���� "�ǵ������� ��ũ ���������ڴٴ��ǵ�"

double gcd(double a, double b) = delete; // C++11 �� �Լ� ���� ����
							// ���� "������ ����"�� �߻��ϰڴٴ� �ǵ�.

int main()
{
	gcd(10, 20);   // ok

	gcd(1.3, 3.4); // ??
}

// �׷���, �Լ� ���� ������ �Ϲ��Լ� ���ٴ�
// �����Ϸ��� ����� special member function �� �����Ҷ� ���