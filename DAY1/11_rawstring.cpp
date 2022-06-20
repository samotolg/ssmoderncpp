// 11_rawstring
#include <iostream>
#include <string>

int main()
{
	std::string s1 = "\\\\.\\pipe\\server";

	std::cout << s1 << std::endl;


	// Raw String : '\' �� Ư�� ���ڰ� �ƴ� �Ϲ� ���ڷ� ����� �޶�.
	// "����ǥ����", "������ ���� ���"
//	std::string s2 = R"(\\.\pipe\server)";

	// 1. " �� ǥ�� �Ϸ��� - �׳� ������ �ȴ�. 
	// ���ڿ� ���� : "(
	// ���ڿ� ���� : )"
//	std::string s2 = R"(\\.\pi"pe\server)";

	// 2. )" �� ǥ���ϰ� �ʹ�.
//	std::string s2 = R"(\\.\pi)"pe\server)"; // error


	// �ذ�å -���۱�ȣ�� ���� ��ȣ�� �����Ҽ��ִ�.
	std::string s2 = R"***(\\.\pi)"pe\server)***"; // ok



	std::cout << s2 << std::endl;
}