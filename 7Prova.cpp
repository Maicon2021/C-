#include <iostream>
#include <conio.h> // comando in put e out put
#include <iomanip> // usando os manipuladores
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <list>

using namespace std;
int main (){
	int numero = 1;
	list <int> minhaLista;
	list<int>::iterator n;
	cout <<"Informe 0 para parar\n";
	
	while (numero != 0) {		
		cout <<"Informe um numero: ";
		cin >> numero;
		minhaLista.push_back(numero);
	}
	
	cout <<"\n------------------ Digitados ------------------------\n";
	for (n = minhaLista.begin(); n != minhaLista.end(); n++) {
		cout<<*n <<" - ";
	}
	
	minhaLista.pop_back();
	minhaLista.sort();
	cout <<"\n------------------ Crescente ------------------------\n";	
	for (n = minhaLista.begin(); n != minhaLista.end(); n++) {
		cout<<*n <<" - ";
	}
}

