// ConsoleApplication20.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

struct pollution
{
	string name;
	int id;
	double reading;
	int total;
};

void main()
{
	int i, total = 0;
	struct pollution data;

	cout << "Please enter the area's name : ";
	cin >> data.name;

	cout << endl << "Enter the area's id number : ";
	cin >> data.id;
	cout << endl << "Please insert 5 readings." << endl;

	for (i = 0; i < 5; i++)
	{
		cout <<"The pollution readings : ";
		cin >> data.reading;
		total = total + data.reading;
	}
	cout << endl<< "Total of five pollution readings : " << total << endl;
}