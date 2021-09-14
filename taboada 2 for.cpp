#include <iostream>
#include <conio.h> // comando in put e out put
#include <iomanip> // usando os manipuladores
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

using namespace std;
int main(){
	system("cls");
	for( int k = 0; k <= 1; k++)
	{
		cout << endl;
		for(int i = 1; i <= 5; i++)
			cout << "TABUADA DO " << setw(3) << (i+5*k) << "   ";
		cout << endl;
		for (int i= 1; i<=10; i++)
		{
			for(int j = 1+5*k; j <= 5+5*k; j++)
				cout << setw(3) <<j <<   " X"
				     << setw(3) <<i <<   " = "
				     << setw(3) <<j*i << "   ";
			cout << endl;
		}
	}
	system("PAUSE");
	return(0);
}
