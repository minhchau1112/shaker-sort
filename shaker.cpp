#include<iostream>
using namespace std;

void ShakerSort(int* a, int n) {
	int surface = 0, bottom = n - 1, k = n - 1;
	while (surface < bottom) {
		for (int i= bottom; i > surface; i--) {
			if (a[i] < a[i - 1]) {
				swap(a[i], a[i - 1]);
				k = i;
			}
		}
		surface = k;
		for (int j = surface; j < bottom; j++) {
			if (a[j] > a[j + 1]) {
				swap(a[j], a[j + 1]);
				k = j;
			}
		}
		bottom = k;
	}

}

int main() {
	int n;
	cout << "Enter the number of elements : ";
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++) {
		a[i] = rand();
	}
	ShakerSort(a, n);
	for (int j = 0; j < n; j++) {
		cout << a[j] << " ";
	}
	delete[] a;
	return 0;
}