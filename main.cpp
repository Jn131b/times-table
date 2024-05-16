#include <iostream>

using namespace std;

int x = 12;
int y = 12;
int loc = 12;
int test;

void menu();

int main()

{
	menu();






	
}


void table() {
	int table[12][12];
	cout << "first" << endl;
	cin >> x;
	cout << "second" << endl;
	cin >> y;

	for (int i = 0; i < y; i++)
	{
		for (int j = 0; j < x; j++)
		{
			table[i][j] = (j + 1) * (i + 1);
			cout << table[i][j] << " ";
		}
		cout << endl;
	}


}

void spetable()
{
	cout << "what times table do you want?" << endl;
	cin >> x;
	int sptable[12];
	for (int i = 0; i < 12; i++)
	{
		sptable[i] = (i * x);
		cout << sptable[i] << " ";
	}
	cout << endl;
}

	





void menu()
{
	
	cout << "[1] - all times tables" << endl;
	cout << "[2] - spesific timestables" << endl;
	cout << "[3] - location" << endl;
	cin >> test;

	switch (test)
	{
	case 1:
		table();
		break;
	case 2:
		spetable();
		break;




	default:
		break;
	}

}


