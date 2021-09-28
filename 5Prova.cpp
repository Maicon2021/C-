#include <iostream>
#include <conio.h> // comando in put e out put
#include <iomanip> // usando os manipuladores
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
using namespace std;
int main(){
    int numero = 1;
    system("cls");
    
    // repetir enquanto numero diferente de zero
    while (numero != 0){
    	
	cout << "Digite um Numero: ";
    	cin >> numero;
    	
    	
    	if (numero == 0){
    		cout << "Fim...";
		}
    	else if (numero % 2 == 0){
    		printf("E Par...\n---------\n");
    		cout << endl;
		}
		else{
			printf("E Impar...\n---------\n");
			cout << endl;
		}
	}

}
    
