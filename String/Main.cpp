#include <iostream>
#include <string>//���������� ����������� �������� �������� �� �������� C++
int main() {
	setlocale(LC_ALL, "Russian");
	int n;




	//���������� ������ �� ����� C
	/*char c_str[]{'H','I','!','\0'};
	for (int i = 0; i < 3; i++)
		std::cout << c_str[i];
	std::cout << std::endl;

	std::cout << c_str << std::endl;

	char c_str2[]{ "Hello world!" };
	std::cout << c_str2 << std::endl;
	*/

	//������-������ ������ string
	/*
	std::string str;
	std::cout << str << std::endl;//������ ������
	str = "Hello world!";
	std::cout << str<<std::endl;//Hello world!
	str = "Bye world!";
	std::cout << str << std::endl;//Bye world!
	str += "!!!!!!!!!! :(";//���������� ������ � ����� ������
	std::cout << str+" ..." << std::endl;
	*/

	//���� ������
	/*
	std::cout << "������! ����� ���� ���?\n���� ->";
	std::string name;
	std::cin >> name;//���� ������ ����� (�� ������� �������)
	std::cout << "������, "<<name<< "\n";
	std::cin.ignore();
	std::cout << "� ��� �� ���������?\n���� ->";
	std::string job;
	std::getline(std::cin, job);
	std::cout << "���, " << job << "? �����!\n";
	std::cout << "������� ���� ���?\n���� ->";
	int age;
	std::cin >> age;
	std::cout << "�����-�� � ��� ���� " << age << " ��� ";
	*/

	//������ �����
	/*
	std::string my_str = "Hello world!";

	//������ length � size - ������� ������������ ���������� �������� ������
	//std::cout << my_str.length()<<std::endl;//12
	//std::cout << my_str.size() << std::endl;//12

	//����� insert ����������� ��������� � ������
	//my_str.insert(3, "!!!");
	//std::cout << my_str << std::endl;

	//����� replace ���������� ����� ������ �� �����
	//  my_str.replace(3,     5,"!!!");
			//������� -^	  ^--���-�� ��������� ��������
	//std::cout << my_str << std::endl;

	//����� find ������������ ������� ������� ��������� ��������� � ������
	//std::cout << my_str.find("l")<<std::endl;
	//std::cout << my_str.find("l", 5) << std::endl;

	//����� rfind ������������ ������� ���������� ��������� ��������� � ������
	//std::cout << my_str.rfind("l")<<std::endl;
	//std::cout << my_str.rfind("l", 6) << std::endl;

	//����� substr ������������ ��������� �� ������
	//std::cout << my_str.substr(4) << std::endl;
	//std::cout << my_str.substr(4,5) << std::endl;
	*/

	//������� ��� ������ �� ��������

	//������� to_string ���������� ����� � ������
	int num = 123;
	std::string num_str = std::to_string(num);
	num_str += "!";
	std::cout << num_str<< std::endl;

	//������� stoi ������������ ����� int ������ �� ������
	num_str = "1234";
	num = std::stoi(num_str);
	std::cout << num << std::endl;





	system("pause");


	return 0;
}