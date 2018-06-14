#include<vector>
#include<iostream>
#include<string>
#include<algorithm>
#include<Windows.h>


using namespace std;

struct Tocka
{
	int redak, stupac;
};

void iscrtaj_plocu(int Redaka, int Stupaca, Tocka *a, Tocka *b, Tocka *x)
{
	for (unsigned i = 1; i < Redaka+1; i++)
	{
		for (unsigned j = 1; j <Stupaca+1 ; j++)
		{
			if (i == x->redak && j == x->stupac)
			{
				cout << "X";
			}
			else if (i == a->redak && j == a->stupac)
			{
				cout << "A";
			}
			else if (i == b->redak && j == b->stupac)
			{
				cout << "B";
			}
			else
			{
				cout << "-";

			}
			
		}
		cout << endl;

	}

}

void update_board(int redaka, int stupaca, Tocka *a,Tocka *b,Tocka *x)
{
	if (x->redak < b->redak && x->stupac < b->stupac)
	{
		while (x->redak != b->redak && x->stupac != b->stupac)
		{

			while (x->stupac < b->stupac)
			{
				x->stupac++;
				iscrtaj_plocu(redaka, stupaca, a, b, x);
				Sleep(100);
				system("cls");
			}

			while (x->redak < b->redak)
			{
				x->redak++;
				iscrtaj_plocu(redaka, stupaca, a, b, x);
				Sleep(100);
				system("cls");
			}

		}
	}
	else if (x->redak < b->redak && x->stupac > b->stupac)
	{
		while (x->redak != b->redak && x->stupac != b->stupac)
		{

			while (x->stupac > b->stupac)
			{
				x->stupac--;
				iscrtaj_plocu(redaka, stupaca, a, b, x);
				Sleep(100);
				system("cls");
			}

			while (x->redak < b->redak)
			{
				x->redak++;
				iscrtaj_plocu(redaka, stupaca, a, b, x);
				Sleep(100);
				system("cls");
			}

		}

	}
	else if (x->redak > b->redak && x->stupac > b->stupac)
	{
		while (x->redak != b->redak && x->stupac != b->stupac)
		{

			while (x->stupac > b->stupac)
			{
				x->stupac--;
				iscrtaj_plocu(redaka, stupaca, a, b, x);
				Sleep(100);
				system("cls");
			}

			while (x->redak > b->redak)
			{
				x->redak--;
				iscrtaj_plocu(redaka, stupaca, a, b, x);
				Sleep(100);
				system("cls");
			}

		}

	}
	else if (x->redak > b->redak && x->stupac < b->stupac)
	{
		while (x->redak != b->redak && x->stupac != b->stupac)
		{

			while (x->stupac < b->stupac)
			{
				x->stupac++;
				iscrtaj_plocu(redaka, stupaca, a, b, x);
				Sleep(100);
				system("cls");
			}

			while (x->redak > b->redak)
			{
				x->redak--;
				iscrtaj_plocu(redaka, stupaca, a, b, x);
				Sleep(100);
				system("cls");
			}

		}

	}
	else if (x->redak == b->redak && x->stupac < b->stupac)
	{
		while (x->stupac != b->stupac)
		{

			while (x->stupac < b->stupac)
			{
				x->stupac++;
				iscrtaj_plocu(redaka, stupaca, a, b, x);
				Sleep(100);
				system("cls");
			}

		}

	}
	else if (x->redak == b->redak && x->stupac > b->stupac)
	{
		while (x->stupac != b->stupac)
		{

			while (x->stupac > b->stupac)
			{
				x->stupac--;
				iscrtaj_plocu(redaka, stupaca, a, b, x);
				Sleep(100);
				system("cls");
			}

		}

	}

	else if (x->redak < b->redak && x->stupac == b->stupac)
	{
		while (x->redak != b->redak)
		{

			while (x->redak < b->redak)
			{
				x->redak++;
				iscrtaj_plocu(redaka, stupaca, a, b, x);
				Sleep(100);
				system("cls");
			}

		}

	}
	else if (x->redak > b->redak && x->stupac == b->stupac)
	{
		while (x->redak != b->redak)
		{

			while (x->redak > b->redak)
			{
				x->redak--;
				iscrtaj_plocu(redaka, stupaca, a, b, x);
				Sleep(100);
				system("cls");
			}

		}

	}
	else if (x->redak == b->redak && x->stupac == b->stupac)
	{
		cout << "Brate iste si tocke upisao" << endl;
	}
}

int main()

{
	int redaka = 20;
	int stupaca = 40;

	

	Tocka a;
	Tocka b;
	

	cout << "A Redaka" << endl;
	cin >> a.redak;
	cout << "A Stupac" << endl;
	cin >> a.stupac;

	cout << "B Redaka" << endl;
	cin >> b.redak;
	cout << "B Stupac" << endl;
	cin >> b.stupac;

	Tocka x;
	x.redak = a.redak;
	x.stupac = a.stupac;

	//iscrtaj_plocu(redaka, stupaca, &a, &b,&x);

	update_board(redaka, stupaca, &a, &b, &x);
	

	
	system("pause");
	return 0;
}
