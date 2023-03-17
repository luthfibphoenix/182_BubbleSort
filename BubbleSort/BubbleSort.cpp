#include <iostream>
using namespace std;

int main()
int a[20];				// Deklarasi array a dengan ukuran 20		
int n;					// Deklarasi variabel n untuk menyimpan banyaknya elemen pada array


void input() {
	while (true) {
		cout << "masukan banyaknya elemen pada array : ";
		cin >> n;
		if (n <= 20)
			break;
		else {
			cout << "\nArray dapat mempunyai maksimal 20 elemen.\";

		}
	}
}