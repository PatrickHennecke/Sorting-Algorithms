// 1.1-1.cpp : This fail is an implementation of insertion sort algorithm
//

#include <iostream>
#include <vector>

void Print(std::vector<int> A);

// 1.1-1 sort using insert sort (increasing order)
void InsertionSort(std::vector<int> A) {
	int key;
	int hole;

	for (int i = 1; i < A.size(); i++) {
		key = A[i];
		hole = i - 1;
		while (hole >= 0 && A[hole] > key) {
			A[hole + 1] = A[hole];
			hole = hole - 1;
		}
		A[hole + 1] = key;
	}

	Print(A);
}

// 1.1-2 sort using insert sort (decreasing order)
void DecreaseInsertion(std::vector<int> A) {
	int key;
	int hole;

	for (int i = A.size() - 2; i >= 0; i--) {
		key = A[i];
		hole = i;
		while (hole < A.size() - 1 && A[hole + 1] > key) {
			A[hole] = A[hole + 1];
			hole = hole + 1;
		}
		A[hole] = key;
	}

	Print(A);
}

void Print(std::vector<int> A) {
	for (int i = 0; i < A.size(); i++) {
		std::cout << A[i] << " ";
	}
	std::cout << std::endl;
}

int main()
{
	std::vector<int> A = { 31, 41, 59, 26, 41, 58 };
	
	InsertionSort(A);
	DecreaseInsertion(A);
}
