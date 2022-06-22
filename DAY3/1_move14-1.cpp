// 1_move14-1
#include <iostream>
#include <string>
#include <vector>

// 106 page
class People
{
	std::string name;
	std::string addr;
public:
	void setName(const std::string& r) { name = r; }
	void setName(std::string&& r) { name = std::move(r); }
};

int main()
{
	People p;

	std::string s1 = "kim";
	std::string s2 = "kim";

	p.setName(s1);				// s�ڿ� �����ؼ� ����ض�
	p.setName(std::move(s2));	// s�ڿ� �̵��ؼ� ����ض�

	std::cout << s1 << std::endl; // "kim"
	std::cout << s2 << std::endl; // "" 

}















