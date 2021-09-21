#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string name;
    cout << "Как вас зовут? ";
    getline(cin, name);
    string age;
    cout << "Сколько вам лет?";
    getline(cin, age);
    string study;
    cout << "Где вы учитесь?";
    getline(cin, study);


    cout << "Поздравляем " << name << ",Вам всего" << age << ", а вы уже ведёте диалог с компьютером!"<< endl;

    return 0;
}