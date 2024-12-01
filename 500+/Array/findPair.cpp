// Code by Pedro V F Santos

// 1-- Find pair with given sum in the array

#include <cstdio>
#include <iostream>
#define MAX 10

using namespace std;

int main (int argc, char *argv[]) {
	
	int nums[MAX] = {8,7,2,5,3,1};
	int target = 10;

	for (int i = 0; i < MAX - 1; i++) {

		for(int j = i + 1 ; j < MAX ; j++){

			if (nums[i] + nums[j] == target) {

				std::cout << "Find Pair(" << nums[i] << "," << nums[j]<<")"<<endl;
			
			}

		}

		std::cout << "Not Find Target" << endl;
	
	}
	return EXIT_SUCCESS;
}

// Complex Big O(n²), just two fors aligned
// T()
