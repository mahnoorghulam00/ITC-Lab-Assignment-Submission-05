              //Name        Mahnoor ghulam muhammad
           //roll num              0091

                                                          //TASK 01
/*
#include<iostream>
using namespace std;
int main()
{
	int day;
	cout << "enter the day";
	cin >> day;
	switch (day)
	{
	case 1:
		cout << "Monday";
		break;
	case 2:
		cout << "Tuesday";
		break;
	case 3:
		cout << "Wednesday";
		break;

	case 4:
		cout << "Thursday";
		break;
	case 5:
		cout << "Friday";
		break;
	case6:
		cout << "saturday";
		break;
	case 7:
		cout << "sunday";
		break;
	deafult:
		cout << "invalid day ";
	}
	return 0;



}
*/

                                                                    //TASK 02
/*

#include<iostream>
using namespace std;
int main()
{
	char grade;
	double gradeponit;
	cout << "enter the grade:";
	cin >> grade;
	switch (grade)
	{
	case'A':case'a':
		cout << " Excellent work " << endl;
		gradeponit = (4.0);
		break;
	case'B':case'b':
		cout << " Good " << endl;
		gradeponit = (3.0);
		break;

	case'C':case'c':
		cout << "Satisfactory " << endl;
		gradeponit = (2.0);

		break;
	case'D':case'd':
		cout << " Needs improvement " << endl;
		gradeponit = (1.0);
		break;
	case'F':case'f':
		cout << "Fail" << endl;
		gradeponit = (0.0);
		break;
	deafult:
		cout << "Invalid grade";
	}
}
*/


                                                                     //TASK 03
/*
#include<iostream>
using namespace std;
int main()
{
	int choice;
	float value;
	float converted;
	cout << "Enter the choice(1-4)";
		cin >> choice;
		cout << "Enter the value:";
		cin >> value;
		cout << "unit converter" << endl;
		cout << " Kilometres to miles" << endl;
		cout << "Kilograms to pounds" << endl;
		cout << " Celsius to Fahrenheit" << endl;
		cout<<" Inches to centimetres" << endl;
		switch (choice)
		{
		case 1:
			converted = value * 0.621371;
			cout << converted;
			break;
		case 2:
			converted = value * 2.20462;
				cout << converted;
				break;
			case 3:
				converted = (value * 9 / 5 + 32);
			cout << converted;
			break;
		case 4:
			converted = value * 2.54;
			cout << converted;
			break;
		default:
			cout << "invalid choice";


		}
		return 0;


}
*/

                                                                //TASK 04
/*
#include<iostream>
using namespace std;
int main()
{
	int month;
	cout << "enter the month(1-12)";
		cin >> month;
		//season is month
		switch (month)
		{
		case 12:
		case 1:
		case 2:
			cout << "Winter" << endl;
			break;
		case 3:
		case 4:
		case 5:
			cout << "Spring" << endl;
			break;
		case 6:
		case 7:
		case 8:
			cout << "Summer" << endl;
			break;
		case 9:
		case 10:
		case 11:
			cout << "Autuman" << endl;
			break;
		default:
			cout << "Invalid month" << endl;

		}
		//days are taken as month
		switch (month)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 10:
		case 12:
			cout << "31 days" << endl;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			cout << "30 days" << endl;
			break;
		case 2:
			cout << "28 days" << endl;
			break;
		default:
			cout << "invalid month";



			}
		return 0;
	



}
*/

                                                       //TASK 05
/*
#include<iostream>
using namespace std;
int main()
{
	int year;
	cout << "Enter the year:";
	cin >> year;
	if (year > 0)
	{
		if (year % 4 == 0)
		{
			if (year % 100 == 0)
			{
				if (year % 400 == 0)
				{
					cout << year << " is a leap year" << endl;
					cout << "February has 29 days" << endl;

				}
				else
				{
					cout << year << " is not a leap year" << endl;
					cout << "February has 29 days" << endl;

				}
			}
			else
			{
				cout << year << " is not leap year" << endl;
				cout << "February has 28 days" << endl;

			}
		}
		else
		{
			cout << year << " is not leap year" << endl;
			cout << "February has 29 days" << endl;

		}
	}
	else {
		cout << "invalid days";
	}

	return 0;
}

*/

                                                                          //TASK 06
/*

#include <iostream>
using namespace std;

int main()
{
	int correctPin = 1234;
	int balance = 20000;
	int enteredPin;
	int amount;
	cout << "Enter your PIN: ";
	cin >> enteredPin;
	cout << "Enter amount to withdraw: ";
	cin >> amount;
	if (enteredPin == correctPin)
	{
		if (amount > 0)
		{
			if (amount <= balance)
			{
				if (amount % 500 == 0)
				{
					balance = balance - amount;
					cout << "Withdrawal successful" << endl;
					cout << "Amount withdrawn: Rs. " << amount << endl;
					cout << "Remaining balance: Rs. " << balance << endl;
				}
				else
				{
					cout << "Amount must be a multiple of 500" << endl;
				}
			}
			else
			{
				cout << "Insufficient balance" << endl;
			}
		}
		else
		{
			cout << "Invalid amount" << endl;
		}
	}
	else
	{
		cout << "Incorrect PIN" << endl;
	}

	return 0;
}

/*
Observation:

1. "Incorrect PIN" is printed. The other checks are inside the PIN
   check, so they run only if the PIN is correct.

2. Message is "Insufficient balance". After swapping the checks, the
   message is "Amount must be a multiple of 500". So the order of nested
   checks matters, because the first check that fails decides the message.
*/



 
                                                               // TASK 07
/*
#include <iostream>
using namespace std;

int main()
{
	int testScore;
	int matricMarks;
	int interMarks;

	cout << "Enter entry test score (out of 100): ";
	cin >> testScore;

	cout << "Enter matric marks (out of 1100): ";
	cin >> matricMarks;

	cout << "Enter intermediate marks (out of 1100): ";
	cin >> interMarks;

	if (testScore >= 50)
	{
		if (matricMarks >= 660)
		{
			if (interMarks >= 660)
			{
				cout << "Admission granted" << endl;

				if (testScore >= 90)
				{
					cout << "Scholarship: 50%" << endl;
				}
				else
				{
					if (testScore >= 75)
					{
						cout << "Scholarship: 25%" << endl;
					}
					else
					{
						cout << "Scholarship: None" << endl;
					}
				}
			}
			else
			{
				cout << "Rejected: intermediate marks are below 660" << endl;
			}
		}
		else
		{
			cout << "Rejected: matric marks are below 660" << endl;
		}
	}
	else
	{
		cout << "Rejected: entry test score is below 50" << endl;
	}

	return 0;
}
*/



                                                                 //TASK 08
/*

#include <iostream>
using namespace std;

int main()
{
	int sideA;
	int sideB;
	int sideC;

	cout << "Enter side A: ";
	cin >> sideA;

	cout << "Enter side B: ";
	cin >> sideB;

	cout << "Enter side C: ";
	cin >> sideC;

	if (sideA > 0)
	{
		if (sideB > 0)
		{
			if (sideC > 0)
			{
				if (sideA + sideB > sideC)
				{
					if (sideA + sideC > sideB)
					{
						if (sideB + sideC > sideA)
						{
							cout << "Valid triangle" << endl;

							if (sideA == sideB)
							{
								if (sideB == sideC)
								{
									cout << "Type: Equilateral" << endl;
								}
								else
								{
									cout << "Type: Isosceles" << endl;
								}
							}
							else
							{
								if (sideA == sideC)
								{
									cout << "Type: Isosceles" << endl;
								}
								else
								{
									if (sideB == sideC)
									{
										cout << "Type: Isosceles" << endl;
									}
									else
									{
										cout << "Type: Scalene" << endl;
									}
								}
							}
						}
						else
						{
							cout << "Not a valid triangle: two sides must add up to more than the third" << endl;
						}
					}
					else
					{
						cout << "Not a valid triangle: two sides must add up to more than the third" << endl;
					}
				}
				else
				{
					cout << "Not a valid triangle: two sides must add up to more than the third" << endl;
				}
			}
			else
			{
				cout << "Invalid: every side must be greater than 0" << endl;
			}
		}
		else
		{
			cout << "Invalid: every side must be greater than 0" << endl;
		}
	}
	else
	{
		cout << "Invalid: every side must be greater than 0" << endl;
	}

	return 0;
}
*/