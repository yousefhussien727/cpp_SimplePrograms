#include <iostream>
#include <string>
using namespace std;

int main()
{
	string pswd;
	cout << "Enter Password: ";
	cin >> pswd;
	cout << "*********************************************************" << endl;
	if (pswd == "190896" || pswd == "185908" || pswd == "189350")
	{
		if (pswd == "190896")
			cout << "\t   Welcome Mr.Yousef Mohamed !\n\n";
		else if (pswd == "185908")
			cout << "\t   Welcome Mr.Mohamed El-Shahat !\n\n";
		else if (pswd == "189350")
			cout << "\t   Welcome Mr.Omar Osama!\n\n";
		cout << "This program is a messenger through encrypted messages\nsent as a numbered code and reform it to text again.\n";
		system("pause");
		cout << "*********************************************************" << endl;

		char cont = 'C';
		while (cont == 'C' || cont == 'c')
		{
			char key;
			cout << "Text to Code: 0" << endl;
			cout << "Code to Text: 1" << endl;
			cin >> key;
			cout << endl;
			if (key == '0') //Text to Code
			{

				string text;
				cout << "Enter Text: \n";
				cin.ignore();
				getline(cin, text);
				cout << "\nCode: \n";
				for (int i = 0; i < text.length(); i++)
				{
					char x;
					long num;
					x = text.at(i);
					num = x;
					if (x > 9 && x < 100)
						cout << "0" << num;
					else
						cout << num;
				}
			}
			else if (key == '1') //Code to Text
			{

				string code;
				cout << "Enter Code: \n";
				cin >> code;
				cout << "\nText: \n";
				for (int j = 0; j < code.length(); j += 3)
				{
					string chr = code.substr(j, 3);
					int l = stoi(chr);
					cout << (char)l;
				}
			}
			else
				cout << "Invalid Input";

			cout << "\n\n*********************************************************" << endl;
			
			cout << "To Continue Enter 'C' and To sign out Enter any key: ";
			cin >> cont;
		}
		cout << endl;
		cout << "*********************************************************" << endl;
		cout << "************* Thank you! Signing out... *****************" << endl;
		cout << "*********************************************************" << endl;
	}
	else
	{
		cout << "Wrong Password! The System is Shutting Down...\n";
		cout << "To Re-enter the password Please Re-open the Program\n";
	}
	
	cout << "\n";
	system("pause");
	return 0;
}