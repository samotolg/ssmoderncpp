
// constexpr �Լ� : ������ ���� ������ �ð��� �˼� �ִٸ�
//				   �Լ� ���൵ ������ �ð��� �ش޶�� ��
constexpr int Factorial(int n)
{
	return n == 1 ? 1 : n * Factorial(n - 1);
}

int main()
{
	int n = 5;


	int arr1[ Factorial(5) ];  // ok.. ������ �ð��� Factorial(5)����

//	int arr2[Factorial(n)];		// error. �迭�� ũ��� ������ �ð��� �˾ƾ� �Ѵ�.
								//		  Factorial(n) �� ���ڰ� ���� �̹Ƿ�
								//		  ����ð�
						
	int s2 = Factorial(n);		// ok. ����ð��� Factorial(n) ����

							// ����ð� ? ������ �ð�
	      int s3 = Factorial(5); // �����Ϸ����� �ٸ�. ��κ� ����ð�
	const int s4 = Factorial(5); // �����Ϸ����� �ٸ�. ��κ� ����ð�
	constexpr int s5 = Factorial(5); // �ݵ�� ������ �ð��� �ش޶�!!
}






