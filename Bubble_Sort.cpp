// Bubble_Sort.cpp 

#include <iostream>
#include <vector>

void Print(std::vector<int> A) {
	for (int i = 0; i < A.size(); i++) {
		std::cout << A[i] << " ";
	}
	std::cout << std::endl;
}

// sort using bubble sort (increasing order)
void Bubble_Sort(std::vector<int> A) {
	bool swapped = true;
	int i = 0;
	while (i < A.size() - 1) {
		swapped = false;
		for (int j = 0; j < A.size() - i - 1; j++) {
			if (A[j] > A[j+1]) {
				std::swap(A[j], A[j+1]);
				swapped = true;
			}
		}
		if (swapped == false) {
			Print(A);
			break;
		}
		i++;
	}
}

// sort using bubble sort (decreasing order)
void Decrease_Bubble(std::vector<int> A) {
	bool swapped = true;
	int i = 0;
	while (i < A.size() - 1) {
		swapped = false;
		for (int j = 0; j < A.size() - i - 1; j++) {
			if (A[j] < A[j + 1]) {
				std::swap(A[j], A[j + 1]);
				swapped = true;
			}
		}
		if (swapped == false) {
			Print(A);
			break;
		}
		i++;
	}
}

int main() {
	std::vector<int> A = { 31, 41, 59, 26, 41, 58 };

	Bubble_Sort(A);
	Decrease_Bubble(A);
}