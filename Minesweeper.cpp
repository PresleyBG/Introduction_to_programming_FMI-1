#include<iostream>
using namespace std;
#define MY_MAX 50

void hideField (char a[][MY_MAX], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			a[i][j] = '#';
	}
}

char nearMines (char a[][MY_MAX], int x, int y)
{
	int nearbyMines = 0;
	for (int i = x-1; i <= x+1; i++)
	{
		for (int j = y-1; j <= y+1; j++)
		{
			if (i == x && j == y)
				continue;
			else
			{
				if (a[i][j] == '*')
					nearbyMines++;
			}
		}
	}
	return char('0'+nearbyMines);
}

void initField (char a[][MY_MAX], int m, int n, int mines) 
{
	int placed = 0;
	while (placed < mines) 
	{
		int random = rand() % (m * n);
		int row = random / n;
		int col = random % m;
		if (a[row][col] == '*') 
			continue; 
		a[row][col] = '*';
		placed++;
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] == '*')
				continue;
			a[i][j] = nearMines (a, i, j);
		}
	}
}

void revealPlace (char a[][MY_MAX], char b[][MY_MAX], int m, int n, int rows, int cols, int& reveal)
{
	if (m >= 0 && n >= 0 && m < rows && n < cols)
	{
		if (a[m][n] == '#')
		{
			a[m][n] = b[m][n];
			reveal++;
			if (a[m][n] == '0')
			{
				for (int i = m-1; i <= m+1; i++)
				{
					for (int j = n-1; j <= n+1; j++)
					{
						if (i == m && j == n)
							continue;
						else
							revealPlace (a, b, i, j, rows, cols, reveal);
					}
				}
			}
		}
	}
}

void showField (char a[][MY_MAX], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
	cout << endl;
}

void guess(char field[][MY_MAX], char hidden[][MY_MAX], int& guess1, int& guess2, int m, int n, int& reveal)
{
	cin >> guess1 >> guess2;
	while (guess1 < 0 || guess2 < 0 || guess1 >= m || guess2 >= n)
	{
		cout << "Wrong input! Please try again: " << endl;
		cin >> guess1 >> guess2;
	}
	revealPlace(hidden, field, guess1, guess2, m, n, reveal);
}

int main()
{
	int rows, cols, mines;
	srand(time(NULL));
	char field[MY_MAX][MY_MAX], hidden[MY_MAX][MY_MAX];
	cout << "Insert parameters of the table and number of mines:" << endl;
	cin >> rows >> cols >> mines;
	hideField (hidden, rows, cols);
	initField (field, rows, cols, mines);
	
	int revealed = 0;
	int guess1, guess2;
	do
	{
		showField (hidden, rows, cols);
		guess (field, hidden, guess1, guess2, rows, cols, revealed);
	} while (hidden[guess1][guess2] != '*' && revealed < (rows * cols - mines));
	if (hidden[guess1][guess2] == '*')
	{
		showField (field, rows, cols);
		cout << endl << "Sorry! You lose!";
	}
	else
	{
		showField (field, rows, cols);
		cout << endl << "Congratulations! You win!";
	}
}

// Missing flagging over mines!!! :)
