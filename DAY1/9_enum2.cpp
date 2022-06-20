// 9_enum - 32 page

//enum DAYOFWEEK { sun = 0, mon = 1 };  // C ��Ÿ��
enum class DAYOFWEEK { sun = 0, mon = 1 };  // C++11 ���ο� enum

// void foo(int dayofaweek) {} // ���ο� enum ������
void foo(DAYOFWEEK dayofaweek) {} // ok.. C++11 ���ʹ� �̷���

int main()
{
//	int n1 = mon; // error.. scope �̸� �ʿ�
//	int n2 = DAYOFWEEK::mon; // error.. int Ÿ�� �ƴ�.

	DAYOFWEEK n3 = DAYOFWEEK::mon; // ok... ��Ȯ�� ǥ���

	foo(DAYOFWEEK::sun); // ok

//	foo(0);// error

	foo(static_cast<DAYOFWEEK>(4));

	// ���������� ������ int ������ �����Ϸ��� ĳ����...
	int n4 = static_cast<int>(DAYOFWEEK::mon);

	

}





