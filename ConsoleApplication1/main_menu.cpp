#include "pch.h"
#include "main_menu.h"

using namespace std;
main_menu::main_menu()
{
 a = '-'; //присваивание значения переменной 
 q = "| выберите команду 1-создать 2-редактировать \n 3-удалить 4-показвть содержание 5-выход";//присваивание значения переменной 
}
void main_menu::get_q() {//метод для вывода информации 
cout << q<<"\n";
}

int main_menu::get_user_status() {//метод для ввода команд
cin >> v; 
return v;
}
void main_menu::paint() {//метод отрисовки боковых граней псевдо-интерфейса
	for (int i = 0; i < 5; i++) {
		cout << "|\n";
		cout << "\t\t\t\t\t\t |\n";
	}
}
void main_menu::horizontal_line () {//метод отрисовки горизонтальных граней псевдо-интерфейса

	for (int i = 0; i < 47; i++) {
		cout << a;
	}
}