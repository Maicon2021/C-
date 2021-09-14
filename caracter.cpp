#include <iostream>
#include <conio.h> // comando in put e out put
#include <iomanip> // usando os manipuladores
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
using namespace std;

int main(){
	
	for (char ch = getch(); ch != 'X'; ch = getch())
		cout << char (ch+1);
		
//getch pega a tecla do teclado	
}
