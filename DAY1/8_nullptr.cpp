// 8_nullptr - 29page

int main()
{
	// C++98 ����
	int  n1 = 0;
	int* p1 = 0;	// ok.   0 �� ��ü�� ���� 
					//     ������ 0���� �Ͻ��� ��ȯ ����
//	int* p2 = 10;	// error

	// C++11 ���ʹ� ������ �ʱ�ȭ��, 0 ��� nullptr����ϼ���
	int* p3 = nullptr; // ok
//	int  n2 = nullptr; // error
}