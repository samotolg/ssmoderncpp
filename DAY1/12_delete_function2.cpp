class Point
{
	int x, y;
public:
	Point() {}
	Point(int a, int b) {}

	// ���� �����ڸ� ����ڰ� ������ ������
	// �����Ϸ��� ������ �ݴϴ�.
	// �����Ϸ����� ���� �����ڸ� ������ ���ϰ� �Ϸ��� ���� �ϸ� �˴ϴ�
	Point(const Point&) = delete; 
	
	Point operator=(const Point&) = delete; // ���Կ����ڵ� ����������
};
int main()
{
	Point p1;
	Point p2(1, 2);
	Point p3(p2); // �� �ڵ尡 �� ������ ������ ?
				  // �����Ϸ��� ������ִ� ��������ڻ��
}

