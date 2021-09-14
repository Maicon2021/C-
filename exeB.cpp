#include <iostream> // ou iostream.h
#include <iomanip> // usando os manipuladores
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
using namespace std; //mascara anexa cout ou cin


int main(){
	
	// exemplo de um número em decimal
	int num;
	int i = 0, j;
	cout<< "Infome o numero Decimal para tranformar em binario: ";
	cin>> num;
	
	// vetor de 8 posições
	int vetor_binario[9];
	
	// aux_num serve para guardar num para mostrar posteriormente
	int aux_num = num;

	// enquanto "num" for maior que 0
	while(num > 0)
	{
		// obtém o resto da divisão de num por 2
		vetor_binario[i] = num % 2;
		i++;
		num = num / 2;
	}

	printf("%d em binario: ", aux_num);

	// percorre o vetor para mostrar o número em binário
	for(j = i - 1; j >= 0; j--)
		printf("%d", vetor_binario[j]);
	printf("\n");
	
	if (aux_num > 255){
		printf("Desnconsiderar o valor em Binario... ERRO binario, valor Max 255");
	}

	return 0;

}
