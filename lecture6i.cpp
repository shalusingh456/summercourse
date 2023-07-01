#include<iostream>
using namespace std;

int main()
{
	int i, j, k;
	i = 0;
	j = 0;
	k = 0;

	cout << i << " " << j << " " << k << endl;
	j = i++;
	cout << i << " " << j << " " << k << endl;
	k = ++i;
	cout << i << " " << j << " " << k << endl;

	for (i = 1; i < 101; i++)
	{
		// Blocks which get executed every time in the loop
	}

	return 0;
}


 