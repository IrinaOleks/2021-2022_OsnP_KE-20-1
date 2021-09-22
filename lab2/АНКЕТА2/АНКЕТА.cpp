#include <iostream>
#include <windows.h>

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char name[20], surname[20], f_name[20], d_birhday[20], sex[20], address[20], phone_num[20], study[50], s_class[10], hobbies[100];

	cout << "Фамилия?: ";
	cin.getline(surname, 20);

	cout << "Имя?: ";
	cin.getline(name, 20);

	cout << "Отчество?: ";
	cin.getline(f_name, 20);

	cout << "Пол?: ";
	cin.getline(sex, 20);

	cout << "День Рождения?: ";
	cin.getline(d_birhday, 20);

	cout << "Адрес: ";
	cin.getline(address, 20);

	cout << "Номер Телефона?: ";
	cin.getline(phone_num, 20);

	cout << "Место учебы?: ";
	cin.getline(study, 50);

	cout << "Класс?: ";
	cin.getline(s_class, 20);

	cout << "Хобби?: ";
	cin.getline(hobbies, 100);



	cout << "\n\n\t\t\t\tА Н К Е Т А" << endl;
	cout << "Фамилия\t\t\tИмя \t\t\tОтчество" << endl;
	cout << "-------\t\t\t---\t\t\t--------" << endl;
	cout << surname << "\t\t\t" << name << "\t\t" << f_name << endl << endl;

	cout << "Пол\t\t\tДень Рождения\t\tНомер Телефона" << endl;
	cout << "---\t\t\t-------------\t\t--------------" << endl;
	cout << sex << "\t\t\t" << d_birhday << "\t\t" << phone_num << endl << endl;

	cout << "Адрес" << endl;
	cout << "-----" << endl;
	cout << address << endl << endl;

	cout << "Место учебы\t\t\tКласс" << endl;
	cout << "-----------\t\t\t-----" << endl;
	cout << study << "\t\t" << s_class << endl << endl;

	cout << "Хобби" << endl;
	cout << "-----" << endl;
	cout << hobbies << endl;

	return 0;
}