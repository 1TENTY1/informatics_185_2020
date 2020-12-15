#include <iostream>
#include <fstream>
using namespace std;

class Employee
{
private:
	string Name;
	string Surname;
	int Years;
	string Address;
	string PhoneNumber;
	int HoursWorked;
	int MoneyPerHour;
public:
	Employee(string name, string surname, int years, string address, string phonenumber, int hoursworked, int moneyperhour)
	{
		Name = name;
		Surname = surname;
		Years = years;
		Address = address;
		PhoneNumber = phonenumber;
		HoursWorked = hoursworked;
		MoneyPerHour = moneyperhour;
	}

	~Employee() {};
public:
	int Salary()
	{
		return HoursWorked * MoneyPerHour;
	}

	double Premium()
	{
		if (Years < 3 && Years > 1)
			return 0.03 * Salary();
		else if (Years < 6)
			return 0.05 * Salary();
		else if (Years < 9)
			return 0.07 * Salary();
		else
			return 0.13 * Salary();
	}

	void Show()
	{
		cout << "Имя: " << Name << endl;
		cout << "Фамилия: " << Surname << endl;
		cout << "Стаж: " << Years << endl;
		cout << "Адрес: " << Address << endl;
		cout << "Номер телефона: " << PhoneNumber << endl;
		cout << "Отработано часов: " << HoursWorked << endl;
		cout << "Денег в час: " << MoneyPerHour << endl;
 	}

	void WriteToFile()
	{
		string FileName = Name + Surname + ".txt";
		ofstream fout("FileName");
		fout << "Имя: " << Name << endl;
		fout << "Фамилия: " << Surname << endl;
		fout << "Стаж: " << Years << endl;
		fout << "Адрес: " << Address << endl;
		fout << "Номер телефона: " << PhoneNumber << endl;
		fout << "Отработано часов: " << HoursWorked << endl;
		fout << "Денег в час: " << MoneyPerHour << endl;
		fout.close();
	}
};