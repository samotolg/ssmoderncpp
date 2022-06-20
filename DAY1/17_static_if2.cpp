#include <type_traits>

// 17_static_if - 51 page

template<typename T> void foo(T a) 
{
	// 0�� ���޹޾����� a�� int Ÿ��
	// int a = 0;

	// if : ����ð� ���
	//      ���ǽ��� ������ �ð��� �����ɼ� �־ 
	//      ����ð� ��������� �Ǵ��ؼ�, ������ �ð��� "false"�� �����Ǿ
	//		������ "���ø�" => "C++�ڵ�" �� ���� 
//	if (false)
//		*a = 10;

	// C++17 ������ �ð� ���
	//  => ���ǽ��� false ��� "���ø�" => "C++�ڵ�" ���� �ȵ�.
//	if constexpr (false)
//		*a = 10;

	// ���������� �Ʒ� ó�� �ϰ� �˴ϴ�.
	if constexpr (std::is_pointer_v<T>) // T�� ������ Ÿ���϶���
		*a = 10;						// �Ʒ� �ڵ带 �����ϰڴ�

}

int main()
{
	foo(0); 
}
// C++17 ����Ϸ���
// g++ : -std=c++17
// VC  : /std:c++17 �Ǵ� /std:c++latest �ʿ�
