#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void square(); void rectangle();
void rightTriangle(); void equalTriangle();
void rhombus(); void parallelogram();
void allah(); void f();

int main() 
{
	int choice;
	do {
		cout << setfill('-') << setw(40) << "-" << endl;
		cout << "Choose from the list:\n";
		cout << "\t1-Square\n";
		cout << "\t2-Rectangle\n";
		cout << "\t3-Right-angled triangle\n";
		cout << "\t4-Equilateral triangle\n";
		cout << "\t5-Rhombus\n";
		cout << "\t6-Parallelogram\n";
		cout << "\t7-Allah in Arabic\n";
		cout << "\t8-Your Grade\n";
		cout << "\t0-End\n";
		cout << "\nYour Choice: "; 
		cin >> choice;
		cout << setfill('-') << setw(40) << "-" << endl;
		if (choice == 1)
			square();
		else if (choice == 2)
			rectangle();
		else if (choice == 3)
			rightTriangle();
		else if (choice == 4)
			equalTriangle();
		else if (choice == 5)
			rhombus();
		else if (choice == 6)
			parallelogram();
		else if (choice == 7)
			allah();
		else if (choice == 8)
			f();
		else if (choice == 0)
			cout << "Thank You!" << endl;
		else
			cout << "Error: Invalid Choice" << endl;
	} while (choice != 0);
	system("pause");
	return 0;
}

void square() 
{
	int side;
	char fill;
	cout << "Enter Side Length: "; cin >> side;
	cout << "Enter the filling character: "; cin >> fill;

	cout << "\n";
	for (int i = 0; i < side; i++)
	{
		cout << "\t";
		for (int j = 0; j < side; j++)
			cout << fill << " ";
		cout << "\n";
	}
	cout << "\n";
}
void rectangle() 
{
	int length, width;
	char fill;
	cout << "Enter the Length: "; cin >> length;
	cout << "Enter the Width: "; cin >> width;
	cout << "Enter the filling character: "; cin >> fill;

	cout << "\n";
	for (int i = 0; i < width; i++)
	{
		cout << "\t";
		for (int j = 0; j < 
length; j++)
			cout << fill << " ";
		cout << "\n";
	}
	cout << "\n";
}
void rightTriangle()
{
	int side;
	char fill;
	cout << "Enter Height & Base Length: "; cin >> side;
	cout << "Enter the filling character: "; cin >> fill;

	cout << "\n";
	for (int i = 0; i < side; i++)
	{
		cout << "\t";
		for (int j = 0; j <= i; j++)
			cout << fill << " ";
		cout << "\n";
	}
	cout << "\n";
}
void equalTriangle()
{
	int base;
	char fill;
	cout << "Enter Base Length: "; cin >> base;
	cout << "Enter the filling character: "; cin >> fill;
	if (base % 2 == 0)
		base++;

	cout << "\n";
	for (int i = 0; i < base; i+=2)
	{
		cout << "\t";
		for (int j = (base / 2); j > i/2; j--)
			cout << "  ";
		for (int k = 0; k <= i; k++)
			cout << fill << " ";
		cout << "\n";
	}
	cout << "\n";
}
void rhombus()
{
		
}
void parallelogram()
{
	int base;
	char fill;
	cout << "Enter Base Length: "; cin >> base;
	cout << "Enter the filling character: "; cin >> fill;
	if (base % 2 == 0)
		base++;

	cout << "\n";
	for (int i = 0; i < base; i += 2)
	{
		cout << "\t";
		for (int j = (base / 2); j > i / 2; j--)
			cout << "  ";
		for (int k = 0; k < base; k++)
			cout << fill << " ";
		cout << "\n";
	}
	cout << "\n";
}
void allah()
{
	string s = " ", fill;
	cout << "Fill: ";
	cin >> fill; //choose writing pattern icon
	int flen = fill.length();
	while (flen > 10)
	{
		cout << "ReEnter Fill: ";
		cin >> fill;
		flen = fill.length();
	}
	for (int l = 0; l < (flen - 1); l++)
		s += " ";
	cout << endl;

	for (int i = 0; i < 4; i++)
	{
		cout << "  ";
		if (i < 2)
		{
			cout << " " << s << " " << s;
			cout << " " << fill << " " << fill;
		}
		else if (i < 3)
		{
			cout << " " << fill << " " << fill;
			cout << " " << fill << " " << fill;
		}
		else if (i < 4)
		{
			cout << " " << fill << " " << s;
			cout << " " << fill << " " << fill;
		}

		for (int ii = 0; ii < 2; ii++)
		{
			cout << " " << s << " " << s;
			cout << " " << fill << " " << fill;
		}
		cout << " " << s;
		cout << " " << fill << " " << fill;
		cout << endl;
	}
	for (int j = 0; j < 2; j++)
	{
		cout << "  ";
		for (int jj = 0; jj < 12; jj++)
			cout << " " << fill;
		cout << " " << s;
		cout << " " << fill << " " << fill;
		cout << endl;
	}
	cout << "\n";
}
void f()
{
	int x, z;
	cout << "Enter your Grade: ";
	cin >> x;
	x = (100 - (x + 5)) / 2;
	z = x / 2;
	cout << "\n";
	for (int h = 0; h < 2; h++)
	{
		for (int i = 0; i < z; i++)
		{
			cout << "\t";
			for (int j = 0; j < x; j++)
				cout << "F ";
			cout << endl;
		}
		for (int i = 0; i < z; i++)
		{
			cout << "\t";
			for (int j = 0; j < z; j++)
				cout << "F ";
			cout << endl;
		}
	}
	for (int i = 0; i < 2; i++)
	{
		cout << "\t";
		for (int j = 0; j < z; j++)
			cout << "F ";
		cout << endl;
	}
	cout << "\n";
}