// Nome: Pedro Vinicius Ferreira Santos RA (831601)
// Professor: Alexandre Levada
// Algoritmo para calcular o comprimento de uma string, usando recursão!

//Incluindo as bibliotecas 
#include <cstdlib>
#include <iostream>

using namespace std;

//Aqui a função, onde o caso base é se o vetor possui um caracter
//nulo, caso contrário ele retorna 1 + o comprimento da string, isso sucessivamente e percorre o vetor (indice vetor + 1).
//A recursão ocorre até o caracter nulo seja chamado, retornando o valor do
//comprimento da string
int comprimentoString(const string& strTamanho, int indiceVetor = 0){

	if (strTamanho[indiceVetor] == '\0'){
		return 0;
	}

	else{
		return 1 + comprimentoString(strTamanho, indiceVetor + 1);
	}
}

int main (int argc, char *argv[]) {

	string strTamanho;
	cout<<"Escreva uma string qualquer: "<<endl;
	getline(cin,strTamanho); //Aqui é para contabilizar os espaços vazios

	int tamanhoString = comprimentoString(strTamanho);
	cout<<"Comprimento da String é: "<< tamanhoString<<endl;

	
	return EXIT_SUCCESS;
}

/*Agora, o calculo de complexidade de tempo
T(n) = T(n -1) + O(1), se n > 0
T(n) = [T(n -2) + O(1)] + O(1)
T(n) = [T(n-3) + O(1)] + O(1) + O(1)
--> K arbitrario 
T(n) = T(n-k) + k * O(1)
--> Se n - k = 0, logo k = n

T(n) = T(0) + n * O(1)
"""" = O(1) + n * O(1) --> O(1) nada mais é que uma constante 1, logo
	 = 1 + (n + 1) 
T(n) = O(n)
*/

/*
 *Para complexidade de espaço, a aplicação é a mesma, pois a pilha depende do tamanho da string (n), 
 logo a complexidade de espaço é O(n)
 */
