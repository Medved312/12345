#include "pch.h"
#include "main_menu.h"

using namespace std;
main_menu::main_menu()
{
 a = '-'; //присваивание значения переменной 
 q = "| выберите команду 1-создать 2-редактировать \n 3-удалить";//присваивание значения переменной 
}
void main_menu::get_q() {
cout << q << "\t\t\t\t\t |\n";
}

int main_menu::get_user_status() {
cin >> v; 
return v;
}
void main_menu::paint() {
	for (int i = 0; i < 5; i++) {
		cout << "|\n";
		cout << "\t\t\t\t\t\t |\n";

	}
}
void main_menu::horizontal_line () {

	for (int i = 0; i < 47; i++) {
		cout << a;
	}
}

