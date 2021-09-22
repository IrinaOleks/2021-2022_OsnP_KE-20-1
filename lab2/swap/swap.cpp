#include <iostream>
#include <windows.h>
using namespace std;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int A, B, C; // инициализация переменных 

	cout << "Введите А и В: ";
	cin >> A >> B;  //Пользователь вводит два числа
	cout << "A = " << A << endl << "B = " << B << endl;

	// В ОЗУ А и В меняються местами 

	C = A;
	A = B;
	B = C;

	cout << "A = " << A << endl << "B = " << B;
	return 0;
}