// 6_enable_if1.cpp

// �ٽ� 1. ���ø� ���ڷ� Ÿ���� �ƴ� "��" �� �����Ҽ� �ֽ��ϴ�
//      2. ���ø� ������ ����Ʈ ���� "primary" ���� ǥ���մϴ�.
//         �κ� Ư��ȭ ������ ǥ���ϸ� �ȵ˴ϴ�.(��, primary ������ ����˴ϴ�.)

template<bool, typename T = void > struct enable_if
{
//	typedef  T type; // ���� ��Ÿ��
	using type = T;  // ���� ��Ÿ��
};
template<typename T> struct enable_if<false, T> 
{
};

int main()
{
	// �Ʒ� �ڵ忡�� �� ������ Ÿ���� ?
	enable_if<true, int>::type  n1; // int n1
	enable_if<true>::type       n2; // void n2 �ε�, void�� �������� �ȵ�. error
	enable_if<false, int>::type n3; // "::type" �� ���ٴ� ����

	// �����ϸ�
	// 1. enable_if<true, Ÿ��>::type �� ����� "Ÿ��"
	// 2. enable_if<true>::type       �� ����� "?"

	// 3. enable_if<false, Ÿ��>::type �� ����� ?
	// 4. enable_if<false::type       �� ����� ?
}




