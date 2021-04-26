#include <iostream>
#include <string>
using namespace std;

void list()
{
	cout << "           .......................\n";
	cout << "         .: Text Modifier Program :.\n";
	cout << "       .:...........................:.\n";
	cout << "     .: This Program adjusts the text :.\n";
	cout << "   .:...................................:.\n";
	cout << " .:   Choose the action to be performed   :.\n";
	cout << " : 1- Letter to Uppercase                  :\n";
	cout << " : 2- Letter to Lowercase                  :\n";
	cout << " : 3- Reverse Text                         :\n";
	cout << " : 4- Capitalize Words                     :\n";
	cout << " :.........................................:\n";
}
string capital(string text)
{
	string ctext = "";
	for (int i = 0; i < text.length(); i++) //Capital all letters
	{
		char letter = text.at(i);
		if (letter >= 97 && letter <= 128)
			letter -= 32;
		ctext += letter;
	}
	return ctext;
}
string small(string text)
{
	string stext = "";
	for (int i = 0; i < text.length(); i++) //Capital all letters
	{
		char letter = text.at(i);
		if (letter >= 65 && letter <= 96)
			letter += 32;
		stext += letter;
	}
	return stext;
}
string reverse(string text)
{
	string rtext = "";
	for (int i = text.length() - 1; i >= 0; i--)
	{
		char letter = text.at(i);
		rtext += letter;
	}
	return rtext;
}
string capWord(string text)
{
	text += " ";
	string cwtext = "";
	int space;
	do
	{
		space = text.find(' ');
		for (int i = 0; i <= space; i++)
		{
			char letter = text.at(i);
			if (i == 0)
			{
				if (letter >= 97 && letter <= 128)
					letter -= 32;
			}
			else
				if (letter >= 65 && letter <= 96)
					letter += 32;
			cwtext += letter;
		}
		text.erase(0, space + 1);
	} while (text.length() > 0);
	return cwtext;
}
int main()
{
	list();
	int choice;
	cout << " : Your Choice : ";
	cin >> choice;
	cin.ignore();
	cout << " :.........................................:\n\n";
	if (choice >= 1 && choice <= 4)
	{
		string userText;
		cout << "Enter Text: ";
		getline(cin, userText);
		cout << endl;
		cout << "Modified :  ";
		if (choice == 1)
			cout << capital(userText) << endl;
		else if (choice == 2)
			cout << small(userText) << endl;
		else if (choice == 3)
			cout << reverse(userText) << endl;
		else if (choice == 4)
			cout << capWord(userText) << endl;
	}
	else
	{
		cout << " ...........................................\n";
		cout << " :Re-open Program and Choose from list only:\n";
		cout << " :.........................................:\n";
	}
	{
		cout << "\n";
		cout << " :::::::::::::::::::::::::::::::::::::::::::\n";
		cout << " ::     Programed by. Yousef Mohamed      ::\n";
		cout << " :::::::::::::::::::::::::::::::::::::::::::\n";
		cout << "\n";
	}

	system("pause");
	return(0);
}
