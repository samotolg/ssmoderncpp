// 9_enum - 32 page

enum DAYOFWEEK { sun = 0, mon = 1};

// ���ڷ� "����"�� �ް� �ʹ�.
void foo(int dayofaweek) {}

int main()
{
//	foo(0);  // 0 : �Ͽ��Ϸ� ���
	foo(sun);  

	int mon = 0;  // ���� �ƴ�.
	foo(mon); // enum ? ��������
	foo(DAYOFWEEK::mon); // ok. �̷��� ����ϴ°��� ����.
	foo(sun);			// �׷���, C���� �̰͵� ��� - ���ڴ�!!
						// scope �̸����� ��밡���ϴ�. - "unscoped enum"
}





