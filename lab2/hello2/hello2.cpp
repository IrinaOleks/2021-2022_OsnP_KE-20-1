#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main() 
{ SetConsoleCP(1251);
SetConsoleOutputCP(1251);

    string name;
    cout << "Как вас зовут? ";
    getline(cin, name);

    cout << "Привет, " << name << endl;

    return 0;
}