#include<iostream>
#include <windows.h>
#include <string>
using namespace std;
int main()
{   SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char Var[100];
	cout << "Введите цитату:";
	cin.getline(Var, 100);
	cout << "Вы ввели цитату:" << Var << endl;

}