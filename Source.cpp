#include <iostream>
#include <Windows.h>
#include <iomanip>
using namespace std;

char grid[9]; int numOfGames = 0;    //the grid and number of games played
const char px = 'X'; int xpoint = 0; //player x symbol and points counter
const char po = 'O'; int opoint = 0; //player o symbol and points counter

void print(); void game(); char check(); bool playerX(); bool playerO();

int main()
{
	//Program Title
	cout << "\n\n\n    The X\O Multiplayer Game";
	Sleep(2000);
	//infinite loop for infinite number of games
	while (true)
	{
		//assign the grid to default
		for (int i = 0; i < 9; i++)
		{
			grid[i] = (char)(49 + i);
		}
		//start a game
		numOfGames++;
		game();
	}
	return 0;
}

void game()
{
	print();
	int i = 0; //counter
	char result = check(); //to check the result after each turn
	bool turn; //to check that the player didn't choose used number
	while (check() == 'C')
	{
		if ((numOfGames + i) % 2 == 0)
			turn = playerX();
		else
			turn = playerO();
		result = check();
		print();
		if (turn) i++;
	}
	//if the result was that player X wins print it and increment a point
	if (result == px)
	{
		cout << "  ! Player X wins !";
		xpoint++;
	}
	//if the result was that player O wins print it and increment a point
	else if (result == po)
	{
		cout << " ! Player O wins !";
		opoint++;
	}
	//if game ended without winners
	else
		cout << " !  Tie  ! ";
	Sleep(1500);
}

void print()
{
	system("cls");
	cout << "<Player X> " << setw(2) << setfill('0') << xpoint;
	cout << "  #" << setw(2) << setfill('0') << numOfGames << "#  ";
	cout << setw(2) << setfill('0') << opoint << " <Player O>" << endl;

	cout << endl;
	cout << "\t  " << grid[0] << "  |  " << grid[1] << "  |  " << grid[2] << endl;

	cout << "\t";
	for (int i = 0; i < 5; i++) cout << (char)196;
	cout << (char)197;
	for (int i = 0; i < 5; i++) cout << (char)196;
	cout << (char)197;
	for (int i = 0; i < 5; i++) cout << (char)196;
	cout << endl;

	cout << "\t  " << grid[3] << "  |  " << grid[4] << "  |  " << grid[5] << endl;

	cout << "\t";
	for (int i = 0; i < 5; i++) cout << (char)196;
	cout << (char)197;
	for (int i = 0; i < 5; i++) cout << (char)196;
	cout << (char)197;
	for (int i = 0; i < 5; i++) cout << (char)196;
	cout << endl;

	cout << "\t  " << grid[6] << "  |  " << grid[7] << "  |  " << grid[8] << endl;
	cout << endl;
}

bool playerX()
{
	//take player choice
	int ch;
	cout << " Player X --> ";
	cin >> ch;
	//if out range
	if (ch < 0 || ch > 9)
		return false;
	//check if the choice is not used before then assign it
	if (grid[ch - 1] != px && grid[ch - 1] != po)
	{
		grid[ch - 1] = px;
		return true;
	}
	return false;
}
bool playerO()
{
	//take player choice
	int ch;
	cout << " Player O --> ";
	cin >> ch;
	//if out range
	if (ch < 0 || ch > 9)
		return false;
	//check if the choice is not used before then assign it
	if (grid[ch - 1] != px && grid[ch - 1] != po)
	{
		grid[ch - 1] = po;
		return true;
	}
	return false;
}

char check()
{
	//horizonal win
	for (int i = 0; i < 7; i += 3)
		if (grid[i] == grid[i + 1] && grid[i + 1] == grid[i + 2])
			return grid[i];
	//vertical win
	for (int i = 0; i < 3; i++)
		if (grid[i] == grid[i + 3] && grid[i + 3] == grid[i + 6])
			return grid[i];
	//diagonal win
	if (grid[0] == grid[4] && grid[4] == grid[8])
		return grid[0];
	if (grid[2] == grid[4] && grid[4] == grid[6])
		return grid[2];
	//tie
	bool finish = true;
	for (int i = 0; i < 9; i++)
		if (grid[i] != px && grid[i] != po)
			finish = false;
	if (finish)
		return 'T';
	//continue
	return 'C';
}