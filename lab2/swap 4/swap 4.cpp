#include <iostream>
#include <windows.h>
using namespace std;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int A, B, C, L, D; // инициализация переменных 

	cout << "Введите А,В,C,D: ";
	cin >> A >> B >> C >> D ;  //Пользователь вводит три числа
	
	
	cout << "A = " << A << endl << "B = " << B << endl << "C = " << C << endl << "D = " << D << endl;

	// В ОЗУ А,В,С,D меняються местами 

	L = C;
	C = A;
	A = B;
	B = D;
	D = L;
	

	cout << "A = " << A << endl << "B = " << B << endl << "C = " << C << "D = " << D;
	return 0;
}