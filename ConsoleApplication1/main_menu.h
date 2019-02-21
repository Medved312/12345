#include <iostream>
#include <string>

#pragma once
using namespace std;
class main_menu//создание класса
{
public://объ€вление методов
	main_menu();
	void horizontal_line();
	int get_user_status();
	void get_q();
	void paint();
	string q;
	
protected://объ€вление переменных
	int v;
	char a;	
};