#include <iostream>
using namespace std;

void bubbleSort(int array[], int size) {
  for (int step = 0; step < size - 1; ++step) {
    // perulangan dilakukann 2 kali: satu untuk berjalan melalui array
    // dan yang lainnya untuk perbandingan
    int swapped = 0;
    for (int i = 0; i < size - step - 1; ++i) {
      // melakukan secara descending, mengantin nilai > ke < pada baris tersebut.
      if (array[i] > array[i + 1]) {

        // ganti posisi array
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
        swapped = 1;
      }
    }

    // Jika tidak ada swapping di swap terakhir, maka array sudah diurutkan.
    if (swapped == 0)
      break;
  }
}

// Function Print Array untuk melakukan cetak
void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    cout << "  " << array[i];
  }
  cout << "\n";
}

// code main
int main() {
	//inputan
	int data[] = {17, 1, 21, 7, 27};
	int size = sizeof(data) / sizeof(data[0]);
	//memangil fungsi bubbleSort
	bubbleSort(data, size);
	
	//Mecetak nilai
	cout << "Sorted Array in Ascending Order:\n";
	printArray(data, size);
}
