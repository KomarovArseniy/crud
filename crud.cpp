#include <iostream>
#include <string>
using namespace std;
int k = 0;
int nudalst;
void menu()
{
	int men;
	setlocale(LC_ALL, "Russian");
	cout << "1) Добавить студента." << endl << "2) Поменять студента. " << endl << "3) просмотреть базу данных. " << endl << "4) удалить студента. " << endl;
	cin >> men;
	while ( men >= 5)
	{
		switch (men)
		{
		case 1:
			if (k = 0)
				St1.Studnt();
			else if (k = 1)
				St2.Studnt();
			else if (k = 2)
				St3.Studnt();
			else
			{
				cout << "Больше студентов нету" << endl;
			}
			k += 1;
		case 2:
			int ns;
			while (ns != 1 || ns != 2 || ns != 3)
			{
				switch (ns)
				{
				case 1:
					St1.PomSt();
				case 2:
					St2.PomSt();
				case 3:
					St3.PomSt();
				default:
					cout << "Выберите одного из студентов. ";
				}
				cin >> ns;
			}
		case 3:
			if (St1.name != " ")
				St1.Person();
			else if (St2.name != " ")
				St2.Person();
			else if (St3.name != " ")
				St3.Person();
		case 4:
			cout << "Выберите, какого студента хотите удалить. " << endl;
			cin >> nudalst;
			while (nudalst != 1 || ns != 2 || ns != 3)
			{
				switch (nudalst)
				{
				case 1:
					St1.obnul();
				case 2:
					St2.obnul();
				case 3:
					St3.obnul();
				default:
					cout << "Выберите одного из студентов. ";
				}
				cin >> nudalst;
			}
		default:
			cout << "Введите один из показаных вариантов. " << endl;
		}
	}

}

class Student
{
public:
	int Studnt()
	{
		string n, t;
		int i;
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
	void PomSt()
	{
		string w, t;
		int i;
		cout << "Введите имя студента. " << endl;
		cin >> w;
		cout << "Введите фамилию студента. " << endl;
		cin >> t;
		cout << "Введите возраст студента. " << endl;
		cin >> i;
		surname = t;
		name = w;
		age = i;
	}
	void obnul()
	{
		name = " ";
		surname = " ";
		age = 0;
	}
	void Person()
	{
		cout << "Name : " << name << endl << "Surname : " << surname << endl << "Age : " << age << endl;
	}
	string name;
private:
	string surname;
	int age;
};
Student St1, St2, St3;
int main()
{
	menu();
	return 0;
}