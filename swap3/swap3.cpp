#include <iostream>
#include <windows.h>
using namespace std;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int A, B, C, L; // инициализация переменных 

	cout << "Введите А,В,C: ";
	cin >> A >> B >> C ;  //Пользователь вводит три числа
	cout << "A = " << A << endl << "B = " << B << endl << "C = " << C << endl;

	// В ОЗУ А,В и С меняються местами 

	L = C;
	C = A;
	A = B;
	B = L;
	
	cout << "A = " << A << endl << "B = " << B << endl << "C = " << C;
	return 0;
}