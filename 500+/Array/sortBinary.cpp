#include <cstdlib>
#include <iostream>
#include <bits/stdtr1c++.h>
using namespace std;

void bubbleSort(vector<int>& vetor){

	int numeroVetor = vetor.size();

	for (int i = 0 ; i < numeroVetor - 1 ; i++) {

		for (int j = 0; j < numeroVetor - i -1 ; j++) {
		
			if(vetor[j] > vetor[j+1]){

				swap(vetor[j],vetor[j+1]);
			}
		}
	
	}
}

int main (int argc, char *argv[]) {
	
	vector<int> vetor = {78, 2, 7, 30, 92, 87, 93, 94, 90, 11, 37, 47, 61, 51, 54};
	bubbleSort(vetor);
	for (auto i :vetor) {

		cout<<i<<" ";
	}
	return EXIT_SUCCESS;
}
