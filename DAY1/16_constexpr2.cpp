// constexpr �뵵 
// 1. constexpr ��� - C++11
// 2. constexpr �Լ� - C++11
// 3. constexpr if   - C++17

int main()
{
	int n = 10;

	const int c1 = n;  // ok 
	const int c2 = 10; // ok

	// C++11 constexpr - "������ �ð�" �̶�� ����
	constexpr int c3 = n; // error
	constexpr int c4 = 10; // ok
}