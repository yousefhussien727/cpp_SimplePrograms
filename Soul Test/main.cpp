#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {

	int a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, total;
	total = 0;
	cout << endl << "\t!! What\'s your soul element?  Cool personality test !!" << endl << endl;
	cout << "\t\tChoose from ( 1, 2, 3, 4 ) only!" << endl << endl;
	cout << "\t!! If you are Ready, "; system("pause");

	//q1
	cout << endl << "* What two words best describe your personality? *" << endl;
	cout << endl << "  1- fun and friendly";
	cout << endl << "  2- creative and clever";
	cout << endl << "  3- chill and easy";
	cout << endl << "  4- emotional and protective" << endl << endl;
	cout << "\tAnswer: "; cin >> a1;
	if (a1 == 1)
	{
		total += 20;
	}
	else if (a1 == 2)
	{
		total += 40;
	}
	else if (a1 == 3)
	{
		total += 30;
	}
	else if (a1 == 4)
	{
		total += 10;
	}
	else
	{
		cout << "Choose from ( 1, 2, 3, 4 ) only !!" << endl;
		total += 500;
	}

	//q2
	cout << endl << "* Which of these animals do you like the most? *" << endl;
	cout << endl << "  1- Dogs";
	cout << endl << "  2- Horses";
	cout << endl << "  3- Butterflies";
	cout << endl << "  4- Dolphins" << endl << endl;
	cout << "\tAnswer: "; cin >> a2;
	if (a2 == 1)
	{
		total += 40;
	}
	else if (a2 == 2)
	{
		total += 10;
	}
	else if (a2 == 3)
	{
		total += 20;
	}
	else if (a2 == 4)
	{
		total += 30;
	}
	else
	{
		cout << "Choose from ( 1, 2, 3, 4 ) only !!" << endl;
		total += 500;
	}

	//q3
	cout << endl << "* Which color combo do you like the most? *" << endl;
	cout << endl << "  1- Black & Brown";
	cout << endl << "  2- Blue & Green";
	cout << endl << "  3- Red & Orange";
	cout << endl << "  4- Green & Purple" << endl << endl;
	cout << "\tAnswer: "; cin >> a3;
	if (a3 == 1)
	{
		total += 40;
	}
	else if (a3 == 2)
	{
		total += 30;
	}
	else if (a3 == 3)
	{
		total += 10;
	}
	else if (a3 == 4)
	{
		total += 20;
	}
	else
	{
		cout << "Choose from ( 1, 2, 3, 4 ) only !!" << endl;
		total += 500;
	}

	//q4
	cout << endl << "* What\'s your favorite movie genre? *" << endl;
	cout << endl << "  1- Thriller & Horror";
	cout << endl << "  2- Comedy & Action";
	cout << endl << "  3- Romantic & Adventure";
	cout << endl << "  4- Drama & Educational documentary" << endl << endl;
	cout << "\tAnswer: "; cin >> a4;
	if (a4 == 1)
	{
		total += 30;
	}
	else if (a4 == 2)
	{
		total += 20;
	}
	else if (a4 == 3)
	{
		total += 10;
	}
	else if (a4 == 4)
	{
		total += 40;
	}
	else
	{
		cout << "Choose from ( 1, 2, 3, 4 ) only !!" << endl;
		total += 500;
	}

	//q5
	cout << endl << "* How many friends do you have? *" << endl;
	cout << endl << "  1- Few groups with some friends in each";
	cout << endl << "  2- From 5 to 10 close friends";
	cout << endl << "  3- About 2 or 3 close friends";
	cout << endl << "  4- Nice big group" << endl << endl;
	cout << "\tAnswer: "; cin >> a5;
	if (a5 == 1)
	{
		total += 10;
	}
	else if (a5 == 2)
	{
		total += 30;
	}
	else if (a5 == 3)
	{
		total += 40;
	}
	else if (a5 == 4)
	{
		total += 20;
	}
	else
	{
		cout << "Choose from ( 1, 2, 3, 4 ) only !!" << endl;
		total += 500;
	}

	//q6
	cout << endl << "* Which of these music genres do you like more than the others? *" << endl;
	cout << endl << "  1- Nice soft Rock";
	cout << endl << "  2- Heavy Metal";
	cout << endl << "  3- Classical Music";
	cout << endl << "  4- With the popular nowadays" << endl << endl;
	cout << "\tAnswer: "; cin >> a6;
	if (a6 == 1)
	{
		total += 20;
	}
	else if (a6 == 2)
	{
		total += 10;
	}
	else if (a6 == 3)
	{
		total += 40;
	}
	else if (a6 == 4)
	{
		total += 30;
	}
	else
	{
		cout << "Choose from ( 1, 2, 3, 4 ) only !!" << endl;
		total += 500;
	}

	//q7
	cout << endl << "* Which magical charm would you like to have? *" << endl;
	cout << endl << "  1- Free & Powerful";
	cout << endl << "  2- Invincibility OR Immortality";
	cout << endl << "  3- Love & Attention";
	cout << endl << "  4- Wisdom" << endl << endl;
	cout << "\tAnswer: "; cin >> a7;
	if (a7 == 1)
	{
		total += 20;
	}
	else if (a7 == 2)
	{
		total += 30;
	}
	else if (a7 == 3)
	{
		total += 10;
	}
	else if (a7 == 4)
	{
		total += 40;
	}
	else
	{
		cout << "Choose from ( 1, 2, 3, 4 ) only !!" << endl;
		total += 500;
	}

	//q8
	cout << endl << "* If someone you love died, how would you handle it? *" << endl;
	cout << endl << "  1- Cry for a long time";
	cout << endl << "  2- Accept that they are gone";
	cout << endl << "  3- Remember past good time and try to be positive";
	cout << endl << "  4- I will give it sometime to realize it" << endl << endl;
	cout << "\tAnswer: "; cin >> a8;
	if (a8 == 1)
	{
		total += 10;
	}
	else if (a8 == 2)
	{
		total += 40;
	}
	else if (a8 == 3)
	{
		total += 20;
	}
	else if (a8 == 4)
	{
		total += 30;
	}
	else
	{
		cout << "Choose from ( 1, 2, 3, 4 ) only !!" << endl;
		total += 500;
	}

	//q9
	cout << endl << "* If you had 1 million dollars, what would you do with it? *" << endl;
	cout << endl << "  1- Donate it";
	cout << endl << "  2- Save it";
	cout << endl << "  3- Spend it";
	cout << endl << "  4- Half to my family and the other for a good cause" << endl << endl;
	cout << "\tAnswer: "; cin >> a9;
	if (a9 == 1)
	{
		total += 20;
	}
	else if (a9 == 2)
	{
		total += 40;
	}
	else if (a9 == 3)
	{
		total += 10;
	}
	else if (a9 == 4)
	{
		total += 30;
	}
	else
	{
		cout << "Choose from ( 1, 2, 3, 4 ) only !!" << endl;
		total += 500;
	}

	//q10
	cout << endl << "* How would you describe your life? *" << endl;
	cout << endl << "  1- Spotlight for attenion";
	cout << endl << "  2- Full of fun and postive vibes";
	cout << endl << "  3- Emotionally ";
	cout << endl << "  4- Filled with love" << endl << endl;
	cout << "\tAnswer: "; cin >> a10;
	if (a10 == 1)
	{
		total += 40;
	}
	else if (a10 == 2)
	{
		total += 30;
	}
	else if (a10 == 3)
	{
		total += 20;
	}
	else if (a10 == 4)
	{
		total += 10;
	}
	else
	{
		cout << "Choose from ( 1, 2, 3, 4 ) only !!" << endl;
		total += 500;
	}

	//answer
	cout << endl << endl;
	if (99 < total, total < 161)
	{
		cout << " Your soul element is FIRE." << endl;
		cout << " You\'re an exceptionally bright and charismatic person and you charm people with your character and attitude." << endl;
	}
	else if (169 < total, total < 241)
	{
		cout << " Your soul element is AIR." << endl;
		cout << " You\'re truly a people person living life to the fullest." << endl;
	}
	else if (249 < total, total < 321)
	{
		cout << " Your soul element is WATER" << endl;
		cout << " You\'re incredibly trusting, understanding, and devoted to everything that matters to you." << endl;
	}
	else if (329 < total, total < 401)
	{
		cout << " Your soul element is EARTH" << endl;
		cout << " You\'re an empathetic, loyal, and hard-working person who prefers to think things through before acting." << endl;
	}
	else
	{
		cout << " SORRY! there is an Error because you have answered wrongly." << endl;
		cout << " Please try again and choose from (1, 2, 3, 4) only!" << endl;
	}

	cout << endl << endl;
	system("pause");
	return 0;
}