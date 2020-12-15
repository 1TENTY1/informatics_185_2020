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
		cout << "���: " << Name << endl;
		cout << "�������: " << Surname << endl;
		cout << "����: " << Years << endl;
		cout << "�����: " << Address << endl;
		cout << "����� ��������: " << PhoneNumber << endl;
		cout << "���������� �����: " << HoursWorked << endl;
		cout << "����� � ���: " << MoneyPerHour << endl;
 	}

	void WriteToFile()
	{
		string FileName = Name + Surname + ".txt";
		ofstream fout("FileName");
		fout << "���: " << Name << endl;
		fout << "�������: " << Surname << endl;
		fout << "����: " << Years << endl;
		fout << "�����: " << Address << endl;
		fout << "����� ��������: " << PhoneNumber << endl;
		fout << "���������� �����: " << HoursWorked << endl;
		fout << "����� � ���: " << MoneyPerHour << endl;
		fout.close();
	}
};