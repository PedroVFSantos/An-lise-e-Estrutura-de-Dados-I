// Nome: Pedro Vinicius Ferreira Santos RA(831601)
// Professor: Alexandre Levada
// Algoritmo recursivo para verificar se um inteiro é primo

//Incluindo bibliotecas
#include <iostream>
using namespace std;

bool isPrime(int numeroASerTestado, int numeroDivisor){

	//Caso base: se numeroASerTestado menor que 2 não é primo
	if (numeroASerTestado <= 1 ){
		return false;
	}
	
	//Caso base: se numeroDivisor atinge a raiz quadrada de numeroASerTestado
	//sem encontrar divisores, numeroASerTestado é primo
	if(numeroDivisor * numeroDivisor > numeroASerTestado){
		return true;
	}

	//Caso base: se numeroASerTestado é divisivel por numeroDivisor, não é primo
	if(numeroASerTestado % numeroDivisor == 0){
		return false;
	}

	//Chamada Recursiva
	return isPrime(numeroASerTestado, numeroDivisor +1);
}

int main (int argc, char *argv[]) {

	int numeroASerTestado;
	cout<<"Digite um numero: "<<endl;
	cin>>numeroASerTestado;

	if(isPrime(numeroASerTestado,2)){
		cout<<numeroASerTestado<<" É primo " <<endl;
	}
	else{
		cout<<numeroASerTestado<<" Não é primo"<<endl;
	}
	return EXIT_SUCCESS;
}

/*
--> Complexidade de Tempo <--:
T(n) = T(n - 1) + O(1), se n > 1
T(n) = [T(n - 2) + O(1)] + O(1)
T(n) = [T(n - 3) + O(1)] + O(1) + O(1)
--> Para um K arbitrário:
T(n) = T(n - k) + k * O(1)

--> Se n - k ≈ √n, logo k ≈ √n (basta verificar divisores até a raiz quadrada de numeroASerTestado para determinar se ele é primo)

T(n) = T(√n) + √n * O(1)
      = O(1) + √n * O(1)
      = O(√n)
T(n) = O(√n)
*/

/*
--> Complexidade de Espaço <--:
A pilha de recursão é proporcional ao número de divisores verificados.
Como o número de divisores testados é aproximadamente √n, a profundidade da pilha é √n.

Portanto, a complexidade de espaço é O(√n).
*/
