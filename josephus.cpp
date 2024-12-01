// Nome: Pedro Vinicius Ferreira Santos  RA (831601)
// Professor: Alexandre Levada
// Algoritmo do problema de Josephus, usando recursão

//Incluindo bibliotecas
#include <cstdlib>
#include <iostream>

using namespace std;


int problemaJosephus(int numeroDeSoldados, int puloSoldado){ 

	//Caso base: com apenas um soldado, ele é o sobrevivente
	if(numeroDeSoldados == 1){
		return 0;
	}

	//Para n soldados, a posição do soldado é calculada a partir da posição do
	//sobrevivente com n - 1. Para garantir que a contagem é ciclica e está no
	//intervalo adequado, utilizamos o (%) -> modulo!
	return (problemaJosephus(numeroDeSoldados - 1,puloSoldado) + puloSoldado) % numeroDeSoldados;
}

int main (int argc, char *argv[]) {
	
	int numeroDeSoldados, puloSoldado;

	cout<<"Digite a quantidade de soldados: "<<endl;
	cin>>numeroDeSoldados;

	cout<<"Digite o valor de pulos"<<endl;
	cin>>puloSoldado;

	cout<<"O sobrevivente está na posição: " << problemaJosephus(numeroDeSoldados,puloSoldado) + 1 <<endl;

	return EXIT_SUCCESS;
}

/*
--> Complexidade de Tempo <--:
T(n) = T(n - 1) + O(1), se n > 1
T(n) = [T(n - 2) + O(1)] + O(1)
T(n) = [T(n - 3) + O(1)] + O(1) + O(1)
--> Para um K arbitrário:
T(n) = T(n - k) + k * O(1)

--> Se n - k = 0, então k = n

T(n) = T(0) + n * O(1)
      = O(1) + n * O(1)
      = O(n)

Portanto, a complexidade de tempo é O(n).
*/

/*
-> Complexidade de Espaço <-:
Como o algoritmo usa recursão, a profundidade da pilha de chamadas depende do número de soldados, n.
Logo, cada chamada ocupa um espaço na pilha, então a profundidade total é n.

Portanto, a complexidade de espaço é O(n).
*/

