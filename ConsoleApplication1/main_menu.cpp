#include "pch.h"
#include "main_menu.h"

using namespace std;
main_menu::main_menu()
{
 a = '-'; //������������ �������� ���������� 
 q = "| �������� ������� 1-������� 2-������������� \n 3-������� 4-�������� ���������� 5-�����";//������������ �������� ���������� 
}
void main_menu::get_q() {//����� ��� ������ ���������� 
cout << q<<"\n";
}

int main_menu::get_user_status() {//����� ��� ����� ������
cin >> v; 
return v;
}
void main_menu::paint() {//����� ��������� ������� ������ ������-����������
	for (int i = 0; i < 5; i++) {
		cout << "|\n";
		cout << "\t\t\t\t\t\t |\n";
	}
}
void main_menu::horizontal_line () {//����� ��������� �������������� ������ ������-����������

	for (int i = 0; i < 47; i++) {
		cout << a;
	}
}