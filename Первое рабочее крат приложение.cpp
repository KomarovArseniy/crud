#include <iostream>
#include <string>
using namespace std;
string o = " ";
int nudalst = 0;
class Student
{
public:
	void Studnt()
	{
		string n = " ", t = " ";
		int i = 0;
		cout << "Введите имя студента. " << endl;
		cin >> n;
		cout << "Введите фамилию студента. " << endl;
		cin >> t;
		cout << "Введите возраст студента. " << endl;
		cin >> i;
		surname = t;
		name = n;
		age = i;
	}
	void obnul()
	{
		int r = 0;
		name = o;
		surname = o;
		age = r;
	}
	void Person()
	{
		cout << "Name : " << name << endl << "Surname : " << surname << endl << "Age : " << age << endl;
	}
	string name = o, surname = o;
	int age = 0;
};
Student St1, St2, St3, St4, St5;
int ns = 0;
void menu()
{
	int men = 1;
	while (men > 0 && men < 6)
	{
		cout << "1) Добавить студента." << endl << "2) Поменять студента. " << endl << "3) просмотреть базу данных. " << endl << "4) удалить студента. " << endl;
		cin >> men;
		if (men == 1)
		{
			if (St1.name != o)
				St1.Studnt();
			else if(St2.name != o)
				St2.Studnt();
			else if (St3.name != o)
				St3.Studnt();
			else if (St4.name != o)
				St4.Studnt();
			else if (St5.name != o)
				St5.Studnt();
			else
			{
				cout << "Больше студентов нету" << endl;
			}
		}
		else if (men == 2)
		{
			cout << "Выберите одного из студентов. " << endl;
			if (St1.name != o)
			{
				cout << "1." << endl;
				St1.Person();
			}
			if (St2.name != o)
			{
				cout << "2." << endl;
				St2.Person();
			}
			if (St3.name != o)
			{
				cout << "3." << endl;
				St3.Person();
			}
			if (St4.name != o)
			{
				cout << "4." << endl;
				St4.Person();
			}
			if (St5.name != o)
			{
				cout << "5." << endl;
				St5.Person();
			}
			cin >> ns;
			if (ns > 0 || ns < 6)
			{
				if (ns == 1)
					St1.Studnt();
				else if (ns == 2)
					St2.Studnt();
				else if (ns == 3)
					St3.Studnt();
				else if (ns == 4)
					St4.Studnt();
				else if (ns == 5)
					St5.Studnt();
				else
					cout << " ";
			}
			else
				cout << "Введите один из показаных вариантов. " << endl;
		}
		else if (men == 3)
		{
			if (St1.name != o)
				St1.Person();
			if (St2.name != o)
				St2.Person();
			if (St3.name != o)
				St3.Person();
			if (St4.name != o)
				St4.Person();
			if (St5.name != o)
				St5.Person();
		}
		else if (men == 4)
		{

			cout << "Выберите, какого студента хотите удалить. " << endl;
			cin >> nudalst;
			if (nudalst > 0 || nudalst < 6)
			{
				if (nudalst == 1)
					St1.obnul();
				else if (nudalst == 2)
					St2.obnul();
				else if (nudalst == 3)
					St3.obnul();
				else if (nudalst == 4)
					St4.obnul();
				else if (nudalst == 5)
					St5.obnul();
				else
					cout << " ";
			}
			else
				cout << "Введите один из показаных вариантов. " << endl;
		}
		else
			cout << "Введите один из показаных вариантов. " << endl;
	}
}


int main()
{
	setlocale(LC_ALL, "Russian");
	menu();
	return 0;
}