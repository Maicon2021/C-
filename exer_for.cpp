#include <iostream> // ou iostream.h
#include <iomanip> // usando os manipuladores
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
using namespace std; //mascara anexa cout ou cin

int main (){
	int tabuada;
	int i, continuar = 1;
	
	
	while (continuar != 0){
	
		cout<< "Qual taboada deseja visualizar? ";
		cin>> tabuada;
	
		for (i = 1; i <= 10; i++)	
			printf("\n%d x %d = %d",i , tabuada, i * tabuada);
			
		cout<<("\nDeseja continuar 1 - Sim, 0 - Não: ");
		cin>>continuar;
	}
	return 0;
}
