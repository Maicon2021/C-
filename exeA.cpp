#include <iostream> // ou iostream.h
#include <iomanip> // usando os manipuladores
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

using namespace std; //mascara anexa cout ou cin


int main(){
	
	int ano;
	ano = 1;
	bool continua = true;
	
	while (continua){
		cout<<"Informo o ano: ";
		cin>>ano;
		
		if (ano == 0){
			continua = false;
		}
	
		else if ((ano % 4 == 0) and (ano % 100 != 0)){
			cout<<"\nAno Bissexto...\n";		
			
		}else if((ano % 4 == 0) and (ano % 100 == 0) and (ano % 400 ==0)){
			cout<<"\nAno Bissexto...\n";
		}
		else{
			cout<<"\nNão Bissexto...\n";
		}
	
	}
	
	return(0);
}
