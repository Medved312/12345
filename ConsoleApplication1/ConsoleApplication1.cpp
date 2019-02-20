#include <string>
#include "pch.h"
#include <iostream>
#include "main_menu.h"
#include <cstdio>
#include <fstream>

using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int status;
	cout << "+";
	main_menu box1;
	box1.horizontal_line();
	cout << "+";

	box1.paint();
	box1.get_q();
	status=box1.get_user_status();
	box1.paint();
	cout << "+";

	box1.horizontal_line();
	cout << " +\n";


	
	if (status == 1) {//создание файла
		system("cls");
		cout << "+";
		box1.horizontal_line();
		cout << "+";
		
		ofstream fout("txt.txt");
		box1.q = "| файл создан";
		fout.close();

		box1.paint();
		box1.get_q();
		box1.paint();
		cout << "+";

		box1.horizontal_line();
		cout << "+";
	}
	else if (status == 2) {//редактирование файла 
		system("cls");
		cout << "+";
		box1.horizontal_line();
		cout << "+";
		box1.paint();
		cout << "\n";

		string text;
		ofstream fout("txt.txt");
		
		cin >> text;
		fout << text; // запись строки в файл
		fout.close();// закрываем файл
		
		box1.paint();//нижняя чать интервейса 
		cout << "+";
		box1.horizontal_line();
		cout << "+";
	}
	else if (status == 3) {//удаление файла
		system("cls");
		cout << "+";
		box1.horizontal_line();
		cout << "+";
		
		remove("txt.txt");
		box1.q = "| файл удалён";

		box1.paint();
		box1.get_q();
		box1.paint();
		cout << "+";

		box1.horizontal_line();
		cout << "+";
	}
	else if (4) {//вывод информации 
		system("cls");//верхняя чать интервейса 
		cout << "+";
		box1.horizontal_line();
		cout << "+";
		box1.paint();
		

		string output_txt;
		ifstream fout("txt.txt");


		fout >> output_txt;//вывод инфрормации
		cout << output_txt;
		fout.close();

		cout << "\n";//нижняя чать интервейса 
		box1.paint();
		cout << "+";
		box1.horizontal_line();
		cout << "+";
	}
}