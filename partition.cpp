#include <iostream>

void printfunc(int arr[], int length);
void quick_sort_partition(int arr[], int low, int end);



int main() {

	int a[7] = { 6, 2, 1, 5, 7 ,9, 3 };

	quick_sort_partition(a, 0, 7);
	printfunc(a, 7);

}

void printfunc(int arr[], int length) {

	std::cout << "[";
	for (int i = 0; i < length; i++) {
		std::cout << arr[i];
		if (i < length - 1) {
			std::cout << ", ";
		}
	}
	std::cout << "]";
}

void quick_sort_partition(int arr[], int low, int end) {

	int pivot = end;
	int i = low;

	for (int j = low; j < end - 1; j++) {

		if (j <= end) {
			//swap j --> i
			int temp = arr[j];
			arr[j] = arr[i];
			temp = arr[i];
			i++;
		}
		else {
			//swap end --> i
			int temp = arr[i];
			arr[i] = arr[end];
			temp = arr[end];


		}

	}

}

