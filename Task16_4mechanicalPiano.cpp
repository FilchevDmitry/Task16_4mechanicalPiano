#include <iostream>
#include<string>
using namespace std;
enum note
{
	DO = 1,
	RE = 2,
	MI = 4,
	FA = 8,
	SOL = 16,
	LA = 32,
	SI = 64
};
int main()
{
	const int SIZE = 12;
	string notes[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		cout << "Enter a chord of 3 notes(1-7) number " << (i + 1) << " : ";
		cin >> notes[i];
	}
	for (int i = 0; i < SIZE; i++)
	{
		string n = notes[i];
		int notw = 0;
		for (int j = 0; j < n.length(); j++)
		{
			int sound = stoi(string(1, n[j]));
			notw |= (1 << sound - 1);
		}

		if (notw & DO)	
			cout << "DO ";
		if (notw & RE)	
			cout << "RE ";
		if (notw & MI)	
			cout << "MI ";
		if (notw & FA)
			cout << "FA ";
		if (notw & SOL)
			cout << "SOL ";
		if (notw & LA)
			cout << "LA ";
		if (notw & SI)
			cout << "SI ";
		cout << endl;
	}
}



