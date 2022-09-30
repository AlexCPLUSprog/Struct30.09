#include <iostream>
#include <string>
using namespace std;

// Описание структуры Date без note
struct date {
	int day = 0;
	int month = 0;
	int year = 0;
};

// Описание структуры person с полем типа date
struct person {
	string name;
	date birthday;
	string position;
	int salary = 0;
};

void show_person(person &P) {
	cout << "Имя: " << P.name << endl;
	cout << "Дата рождения: " << P.birthday.day << '.' << P.birthday.month << '.' << P.birthday.year << endl;
	cout << "Должность: " << P.position << endl;
	cout << "Зарплата: " << P.salary << endl;
}

person add_person() {
	person tmp;
	cout << "Введите имя: ";
	cin >> tmp.name;
	cout << "Ввод даты рождения:\nДень: ";
	cin >> tmp.birthday.day;
	cout << "Месяц: ";
	cin >> tmp.birthday.month;
	cout << "Год: ";
	cin >> tmp.birthday.year;
	cout << "Введите должность: ";
	cin >> tmp.position;
	cout << "Введите зарплату: ";
	cin >> tmp.salary;
	cout << endl;
	return tmp;
}

void fill_person(person &P) {	
	cout << "Введите имя: ";
	cin >> P.name;
	cout << "Ввод даты рождения:\nДень: ";
	cin >> P.birthday.day;
	cout << "Месяц: ";
	cin >> P.birthday.month;
	cout << "Год: ";
	cin >> P.birthday.year;
	cout << "Введите должность: ";
	cin >> P.position;
	cout << "Введите зарплату: ";
	cin >> P.salary;
	cout << endl;
	
}

struct persona {
	string name;
	int age = 0;
	int coins[5]{};
};

void show_persona(persona &P);
int year_of_birth(persona &P, int year);
int cash(persona &P);

int main() {
	setlocale(LC_ALL, "Russian");

	// Описание структуры Person
	/*struct person {
		string name; // строковое поле с именем
		int age;	 // Числовое поле с возрастом
	} p1, p2{ "Bob", 6 }; // создание объектов структуры

	p1.name = "Tom"; // Присвоение полю name значения Tom
	p1.age = 18;	 // Присвоение полю age значения 18

	// Вывод полей структур
	cout << "Имя: " << p1.name << endl;
	cout << "Возраст: " << p1.age << endl;
	cout << "Имя: " << p2.name << endl;
	cout << "Возраст: " << p2.age << endl;*/

	// Описание структуры Date
	/*struct date {
		int day;
		int month;
		int year;
		string note = "empty";	// Значение по умолчанию
	};

	date bd;	// Создание объекта структуры
	bd = { 1, 1, 1970, "My birthday" };

	date X{ 31, 12, 1999 };
	cout << X.note << endl;
	cout << bd.note << endl;*/
		
	/*person alex{
		"Alex",
		{ 12, 12, 2000 },
		"manager",
		75000
	};	

	person jack = alex;	// копирование значений из полей объекта alex в поля объекта jack
	jack.name = "Jack";
	jack.birthday = { 5, 10, 1990 };


	show_person(alex);
	cout << endl;
	show_person(jack);*/

	// создание указателя на объект структуры
	/*person* pAlex = &alex;

	// Обращение к полям структуры через указатель
	cout << pAlex->name << endl;
	cout << pAlex->birthday.day << endl;*/



	/*person A = add_person();
	show_person(A);*/

	/*person B;
	fill_person(B);
	show_person(B);*/

	// Задача 1. Структура persona
	cout << "Задача 1.\nИнфо по персоне:\n";
	persona denny{
		"Denny",
		12,
		{ 5, 1, 2, 2, 1 }
	};
	show_persona(denny);
	cout << "Год рождения: " << year_of_birth(denny, 2022) << endl;
	cout << "Общие сбережения: " << cash(denny) << endl;

	cout << sizeof(denny) << endl;

	return 0;
}


// Задача 1
int cash(persona& P) {
	int sum = 0;
	for (int i = 0; i < 5; i++)
		sum += P.coins[i];
	return sum;
}

int year_of_birth(persona& P, int year) {
	return year - P.age;
}

void show_persona(persona& P) {
	cout << "Имя: " << P.name << endl;
	cout << "Возраст: " << P.age << endl;
	cout << "Монеты: ";
	for (int i = 0; i < 5; i++)
		cout << P.coins[i] << ' ';
	cout << endl;
}
