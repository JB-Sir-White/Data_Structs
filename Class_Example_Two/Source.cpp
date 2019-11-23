// Javier Blanco																							Date: 07/22/2019

//Program to demonstrate a very simple example of a class.

//A better version of the class DayOfYear will be given in Display 6.4.

#include <iostream>

using namespace std;

class DayOfYear
{

public:
	int month;

	int day;

	void output();
};



int main()
{

	DayOfYear today, birthday;

	cout << "Enter today's date:\n";

	cout << "Enter month as a number: ";

	cin >> today.month;

	cout << "Enter the day of the month: ";

	cin >> today.day;

	cout << "\n\nEnter your birthday:\n";

	cout << "Enter month as a number: ";

	cin >> birthday.month;

	cout << "Enter the day of the month: ";

	cin >> birthday.day;



	cout << "\n\nToday's date is ";

	today.output();

	cout << endl;

	cout << "\n\nYour birthday is ";

	birthday.output();

	cout << endl;



	if (today.month == birthday.month && today.day == birthday.day)

		cout << "\nHappy Birthday!\n";

	else

		cout << "\nHappy Unbirthday!\n";
	system("pause");
	return 0;
}

//Uses iostream:

void DayOfYear::output() //out puts month as string 
{
	switch (month)
	{
	case 1:
	{
		cout << "January "; break;
	}
	case 2:
	{
		cout << "February "; break;
	}
	case 3:
	{
		cout << "March "; break;
	}
	case 4:
	{
		cout << "April "; break;
	}
	case 5:
	{
		cout << "May "; break;
	}
	case 6:
	{
		cout << "June "; break;
	}
	case 7:
	{
		cout << "July "; break;
	}
	case 8:
	{
		cout << "August "; break;
	}
	case 9:
	{
		cout << "September "; break;
	}
	case 10:
	{
		cout << "October "; break;
	}
	case 11:
	{
		cout << "November "; break;
	}
	case 12:
	{
		cout << "December "; break;
	}
	default:
		cout << "Error in DayOfYear::output. Contact software vendor.";
	}
	cout << day;
}
/*
No errors found in code
*/