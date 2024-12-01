#include <cstdio>
#include <iostream>
#include <bits/stdtr1c++.h>
using namespace std;

void selectionSort(vector<int> &vetorTeste){

	int numeroVetor = vetorTeste.size();

	for (int i = 0; i < numeroVetor -1 ; i++) {

		int numeroMinimo = i;

		for(int j = i + 1 ; j < numeroVetor ; j++)

			if(vetorTeste[j] < vetorTeste[numeroMinimo]){

    		      numeroMinimo = j;
		}
		swap(vetorTeste[i], vetorTeste[numeroMinimo]);
	}


}

void imprimiArray(vector<int> &vetorTeste){
	for(int valor: vetorTeste){
		cout<<valor<<" ";

	}
	cout<<endl;
}

int main (int argc, char *argv[]) {
	
	vector<int> vetorTeste = { 1, 0, 1, 0, 1, 0, 0, 1 };
	cout << "Array Original" <<endl; 
	imprimiArray(vetorTeste);

	selectionSort(vetorTeste);

	cout << "Selection Sort Array"<<endl;
	imprimiArray(vetorTeste);
	return EXIT_SUCCESS;
}
