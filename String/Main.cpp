#include <iostream>
#include <string>//Библиотека позволяющая работать работать со строками C++
int main() {
	setlocale(LC_ALL, "Russian");
	int n;




	//Символьный массив из языка C
	/*char c_str[]{'H','I','!','\0'};
	for (int i = 0; i < 3; i++)
		std::cout << c_str[i];
	std::cout << std::endl;

	std::cout << c_str << std::endl;

	char c_str2[]{ "Hello world!" };
	std::cout << c_str2 << std::endl;
	*/

	//Строка-Обьект класса string
	/*
	std::string str;
	std::cout << str << std::endl;//Пустая строка
	str = "Hello world!";
	std::cout << str<<std::endl;//Hello world!
	str = "Bye world!";
	std::cout << str << std::endl;//Bye world!
	str += "!!!!!!!!!! :(";//Добавление текста в конец строки
	std::cout << str+" ..." << std::endl;
	*/

	//Ввод строки
	/*
	std::cout << "Привет! Какое твое имя?\nВвод ->";
	std::string name;
	std::cin >> name;//Ввод одного слова (до первого пробела)
	std::cout << "Привет, "<<name<< "\n";
	std::cin.ignore();
	std::cout << "А кем ты работаешь?\nВвод ->";
	std::string job;
	std::getline(std::cin, job);
	std::cout << "Ого, " << job << "? Круто!\n";
	std::cout << "Сколько тебе лет?\nВвод ->";
	int age;
	std::cin >> age;
	std::cout << "Когда-то и мне было " << age << " лет ";
	*/

	//Методы строк
	/*
	std::string my_str = "Hello world!";

	//Методы length и size - методфы возвращающие количество символов строки
	//std::cout << my_str.length()<<std::endl;//12
	//std::cout << my_str.size() << std::endl;//12

	//Метод insert вставляющий подстроку в строку
	//my_str.insert(3, "!!!");
	//std::cout << my_str << std::endl;

	//Метод replace заменяющий часть строки на новую
	//  my_str.replace(3,     5,"!!!");
			//Позиция -^	  ^--кол-во удаляемых символов
	//std::cout << my_str << std::endl;

	//Метод find возвращающий позицию первого вхождения подстроки в строку
	//std::cout << my_str.find("l")<<std::endl;
	//std::cout << my_str.find("l", 5) << std::endl;

	//Метод rfind возвращающий позицию последнего вхождения подстроки в строку
	//std::cout << my_str.rfind("l")<<std::endl;
	//std::cout << my_str.rfind("l", 6) << std::endl;

	//Метод substr возвращающий подстроку из строки
	//std::cout << my_str.substr(4) << std::endl;
	//std::cout << my_str.substr(4,5) << std::endl;
	*/

	//Функции для работы со строками

	//функция to_string превращает числа в строки
	int num = 123;
	std::string num_str = std::to_string(num);
	num_str += "!";
	std::cout << num_str<< std::endl;

	//Функция stoi возвращающая число int взятое из строки
	num_str = "1234";
	num = std::stoi(num_str);
	std::cout << num << std::endl;





	system("pause");


	return 0;
}