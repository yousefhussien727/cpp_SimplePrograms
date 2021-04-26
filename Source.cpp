#include <iostream>
#include <ctime>
#include <cstdlib>
#include <Windows.h>
using namespace std;

bool inRange(int num)
{
	if (num >= 1 && num <= 10)
		return true;
	return false;
}

int game()
{
	int user = 1, comp = 1, sum = 0;
	srand(time(0));
	while(sum < 68)
	{
		comp = (rand() % 10) + 1;
		cout << "ME : ";
		Sleep(500);
		cout << comp << endl;
		sum += comp;
		cout << "SUM = " << sum << endl << endl;

		do { cout << "YOU: "; cin >> user; } while (!inRange(user));
		sum += user;
		cout << "SUM = " << sum << endl << endl;
	}

	if (sum < 78)
	{
		comp = 78 - sum;
		cout << "ME : ";
		Sleep(1000);
		cout << comp << endl;
		sum += comp;
		cout << "SUM = " << sum << endl << endl;
	}
	else if (sum == 78)
	{
		comp = 4;
		cout << "ME : ";
		Sleep(1000);
		cout << comp << endl;
		sum += comp;
		cout << "SUM = " << sum << endl << endl;
	}
	else if (sum < 89)
	{
		comp = 89 - sum;
		cout << "ME : ";
		Sleep(800);
		cout << comp << endl;
		sum += comp;
		cout << "SUM = " << sum << endl << endl;
	}

	do { cout << "YOU: "; cin >> user; } while (!inRange(user));
	sum += user;
	cout << "SUM = " << sum << endl << endl;
	
	if (sum < 89)
	{
		comp = 89 - sum;
		cout << "ME : ";
		Sleep(800);
		cout << comp << endl;
		sum += comp;
		cout << "SUM = " << sum << endl << endl;
	}
	else if (sum == 89)
	{
		comp = 4;
		cout << "ME : ";
		Sleep(800);
		cout << comp << endl;
		sum += comp;
		cout << "SUM = " << sum << endl << endl;
	}
	else if (sum < 100)
	{
		comp = 100 - sum;
		cout << "ME : ";
		Sleep(800);
		cout << comp << endl;
		sum += comp;
		cout << "SUM = " << sum << endl << endl;
	}
	
	if (sum >= 100) return 1;

	do { cout << "YOU: "; cin >> user; } while (!inRange(user));
	sum += user;
	cout << "SUM = " << sum << endl << endl;
	
	if (sum >= 100) return 0;

	comp = 100 - sum;
	cout << "ME : ";
	Sleep(700);
	cout << comp << endl;
	sum += comp;
	cout << "SUM = " << sum << endl << endl;
	if (sum >= 100) return 1;
}

int main() 
{
	int result = game();

	if (result == 1)
		cout << "I WIN :)" << endl;
	else if (result == 0)
		cout << "You WIN :(" << endl;

	Sleep(3000);
	return 0;
}