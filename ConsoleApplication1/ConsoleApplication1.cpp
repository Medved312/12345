#include <string>
#include "pch.h"
#include <iostream>
#include "main_menu.h"
#include <cstdio>
#include <fstream>

#include <windows.h>

#define WIDTH 2 //X. столбик
#define HEIGHT 12//Y. строчка

using namespace std;
int main()
{
	system("cls");
	SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
	SetConsoleOutputCP(1251);// установка кодовой страницы win-cp 1251 в поток вывода
	
	int status;
	cout << "+";
	main_menu box1;
	box1.horizontal_line();//верхняя чать интерфейса 
	cout << "+";
	box1.paint();

	box1.get_q();//вывод пояснения

	box1.paint();//нижняя часть интерфейса
	cout << "+";
	box1.horizontal_line();
	cout << " +\n";

	HANDLE hCon;//создание объекта классов координат
	COORD cPos;

	hCon = GetStdHandle(STD_OUTPUT_HANDLE);//перемещение курсора для ввода инф
	cPos.Y = HEIGHT ;//координаты
	cPos.X = (WIDTH);
	SetConsoleCursorPosition(hCon, cPos);//хз

	status=box1.get_user_status();//объект для ввода инф

	
	
	if (status == 1) {//создание файла
		system("cls");
		cout << "+";//верхняя чать интерфейса 
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
		cout << "+\n";

		system("pause");
		main();
	}
	else if (status == 2) {//редактирование файла 
		system("cls");
		cout << "+";//верхняя чать интерфейса 
		box1.horizontal_line();
		cout << "+";
		box1.paint();
		cout << "\n";

		box1.paint();//нижняя чать интервейса 
		cout << "+";
		box1.horizontal_line();
		cout << "+\n";

		hCon = GetStdHandle(STD_OUTPUT_HANDLE);//перемещение курсора для ввода инф
		cPos.Y = HEIGHT;//координаты
		cPos.X = (WIDTH);
		SetConsoleCursorPosition(hCon, cPos);//хз

		string text;//переменная для инфы в файл
		ofstream fout("txt.txt", ios_base::app);//дописыывание инф в конец файла. дляполного редактировваниея с 0 убрать  ios_base::app
		
		cin >> text;
		fout << text; // запись строки в файл
		fout.close();// закрываем файл
		
		main();
	}
	else if (status == 3) {//удаление файла
		system("cls");//отчисстка CMD
		cout << "+";//верхняя чать интерфейса 
		box1.horizontal_line();
		cout << "+";
		
		remove("txt.txt");
		box1.q = "| файл удалён";

		box1.paint();
		box1.get_q();
		box1.paint();
		cout << "+";

		box1.horizontal_line();
		cout << "+\n";

		system("pause");
		main();
	}
	else if (status == 4) {//вывод информации 
		system("cls");//отчисстка CMD
		
		cout << "+";//верхняя чать интервейса 
		box1.horizontal_line();
		cout << "+";
		box1.paint();
		
		string output_txt;
		ifstream fout("txt.txt");

		fout >> output_txt;//запись инф из файла в переменную
		cout << output_txt;//вывод инф из переменной
		fout.close();

		cout << "\n";//нижняя чать интервейса 
		box1.paint();
		cout << "+";
		box1.horizontal_line();
		cout << "+\n";

		system("pause");
		main();
	}
	else if (status == 5) {
		return 0;
	}
	else {
		main();
	}
}