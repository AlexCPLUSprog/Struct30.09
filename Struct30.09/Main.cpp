#include <iostream>
#include <string>
using namespace std;

// �������� ��������� Date ��� note
struct date {
	int day = 0;
	int month = 0;
	int year = 0;
};

// �������� ��������� person � ����� ���� date
struct person {
	string name;
	date birthday;
	string position;
	int salary = 0;
};

void show_person(person &P) {
	cout << "���: " << P.name << endl;
	cout << "���� ��������: " << P.birthday.day << '.' << P.birthday.month << '.' << P.birthday.year << endl;
	cout << "���������: " << P.position << endl;
	cout << "��������: " << P.salary << endl;
}

person add_person() {
	person tmp;
	cout << "������� ���: ";
	cin >> tmp.name;
	cout << "���� ���� ��������:\n����: ";
	cin >> tmp.birthday.day;
	cout << "�����: ";
	cin >> tmp.birthday.month;
	cout << "���: ";
	cin >> tmp.birthday.year;
	cout << "������� ���������: ";
	cin >> tmp.position;
	cout << "������� ��������: ";
	cin >> tmp.salary;
	cout << endl;
	return tmp;
}

void fill_person(person &P) {	
	cout << "������� ���: ";
	cin >> P.name;
	cout << "���� ���� ��������:\n����: ";
	cin >> P.birthday.day;
	cout << "�����: ";
	cin >> P.birthday.month;
	cout << "���: ";
	cin >> P.birthday.year;
	cout << "������� ���������: ";
	cin >> P.position;
	cout << "������� ��������: ";
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

	// �������� ��������� Person
	/*struct person {
		string name; // ��������� ���� � ������
		int age;	 // �������� ���� � ���������
	} p1, p2{ "Bob", 6 }; // �������� �������� ���������

	p1.name = "Tom"; // ���������� ���� name �������� Tom
	p1.age = 18;	 // ���������� ���� age �������� 18

	// ����� ����� ��������
	cout << "���: " << p1.name << endl;
	cout << "�������: " << p1.age << endl;
	cout << "���: " << p2.name << endl;
	cout << "�������: " << p2.age << endl;*/

	// �������� ��������� Date
	/*struct date {
		int day;
		int month;
		int year;
		string note = "empty";	// �������� �� ���������
	};

	date bd;	// �������� ������� ���������
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

	person jack = alex;	// ����������� �������� �� ����� ������� alex � ���� ������� jack
	jack.name = "Jack";
	jack.birthday = { 5, 10, 1990 };


	show_person(alex);
	cout << endl;
	show_person(jack);*/

	// �������� ��������� �� ������ ���������
	/*person* pAlex = &alex;

	// ��������� � ����� ��������� ����� ���������
	cout << pAlex->name << endl;
	cout << pAlex->birthday.day << endl;*/



	/*person A = add_person();
	show_person(A);*/

	/*person B;
	fill_person(B);
	show_person(B);*/

	// ������ 1. ��������� persona
	cout << "������ 1.\n���� �� �������:\n";
	persona denny{
		"Denny",
		12,
		{ 5, 1, 2, 2, 1 }
	};
	show_persona(denny);
	cout << "��� ��������: " << year_of_birth(denny, 2022) << endl;
	cout << "����� ����������: " << cash(denny) << endl;

	cout << sizeof(denny) << endl;

	return 0;
}


// ������ 1
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
	cout << "���: " << P.name << endl;
	cout << "�������: " << P.age << endl;
	cout << "������: ";
	for (int i = 0; i < 5; i++)
		cout << P.coins[i] << ' ';
	cout << endl;
}
