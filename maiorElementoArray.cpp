// Nome: Pedro Vinicius Ferreira Santos RA (831602)
// Professor: Alexandre Levada
// Algoritmo para calcular o maior elemento de um array 

//Incluindo as bibliotecas 
#include <iostream>
#include <cstdlib>

using namespace std;
#define meioDivisor 2

//Esta função divide o array em subarrays menores e  retorna o elemento maior
int maiorElementoArray(int Array[], int inicioArray, int fimArray){

	//Caso base: se tiver apenas um elemento
	if (inicioArray == fimArray){
		return Array[inicioArray];
	}

	//Caso base: se tiver dois elementos
	if(inicioArray == fimArray -1){
		return max(Array[inicioArray], Array[fimArray]);
	}

	int meioArray = (inicioArray + fimArray) / meioDivisor;

	int maiorAEsquerda = maiorElementoArray(Array,inicioArray,meioArray);
	int maiorADireita = maiorElementoArray(Array,meioArray + 1, fimArray);
	return max(maiorAEsquerda,maiorADireita);
}

int main (int argc, char *argv[]) {
	
	int tamanhoArray;
	cout<<"Digite o tamanho do Array: "<<endl;
	cin>>tamanhoArray;

	int Array[tamanhoArray];
	cout<<"Digite os "<<tamanhoArray<<" elementos: "<<endl;
	for (int i = 0; i < tamanhoArray; i++) {

		cin>>Array[i];
	}
	
	cout<<"O maior elemento do Array é: " << maiorElementoArray(Array,0,tamanhoArray-1)<<endl;
	return EXIT_SUCCESS;
}

/*
Complexidade de Tempo:
T(n) = 2 * T(n / 2) + O(1), se n > 1
T(n) = [2 * T(n / 4) + O(1)] + O(1)
T(n) = [4 * T(n / 4) + 2 * O(1)] + O(1)
--> Para um K arbitrário:
T(n) = 2^k * T(n / 2^k) + k * O(1)

--> Se n / 2^k = 1, então n = 2^k, logo k = ln(n)

T(n) = T(1) * n + ln(n) * O(1)
      = O(1) * n + ln(n) * O(1)
      = O(n) + O(log n)
T(n) = O(n)
*/

/*
Complexidade de Espaço:
Como a pilha de recursão depende do número de divisões do array,
e o array é dividido pela metade em cada nível, o número total
de chamadas recursivas é ln(n).

Portanto, a complexidade de espaço é O(logn).
*/
