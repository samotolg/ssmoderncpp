// 16_constexpr1

template<int N> class check {};

int main()
{
	int n = 10;
	const int c1 = 10;  // ������ �ð� ���(�����Ϸ��� ���� �˰� �ִ�.)
	const int c2 = n;	// ����ð� ���(�����Ͻÿ��� ���� �𸣰�,
						//				�����Ҷ� �����Ҽ� ���ٴ°�)

	// ������ ������ ��� ������
	// �迭, ���ø����� ���� �������Ҷ� ��(ũ��)�� �˾ƾ� �Ѵ�.
	int arr1[10]; // ok
	int arr2[n ]; // error. �迭 ũ��� ���� �ȵ�.
	int arr3[c1]; // ok
	int arr4[c2]; // error

	check<n> ch1;// error
	check<c1> ch2;// ok
	check<c2> ch3;// error
}


