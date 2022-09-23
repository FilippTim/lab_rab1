#include <iostream> //ком1
#include <windows.h>//ком2


	int main()//ком3
	{//ком3.1
		std::cout << "First string" << "\n"; //выводим в консоль "First string"
		SetConsoleOutputCP(CP_UTF8);//ком4
		auto str1 = u8"Первая строка \n";//ком5
		auto str2 = u8"Вторая строка \n";//ком6
		std::cout << str1 << str2;//ком7
		int a = 150;//ком8
		float b = 15.933f;//ком8
		unsigned int c = 250;//ком8
		std::cout << "a = " << a<<"\n";//ком8
		std::cout << "b = " << b<<"\n";//ком8
		std::cout << "c = " << c<< "\n";//ком8

		unsigned int day = 27;
		auto month = u8"Ноября";
		unsigned int year = 2003;
		std::cout << u8"Моя дата рождения: " << day<< " " << month << " " << year<< " " << u8"года"<< "\n";
		float s = 2.3f;
		auto str = " WINDOWS";
		std::cout << s << str;
	}//ком??


