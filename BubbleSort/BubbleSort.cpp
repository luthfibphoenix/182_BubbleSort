#include <iostream>
using namespace std;
 
int a[20];				// Deklarasi array a dengan ukuran 20		
int n;					// Deklarasi variabel n untuk menyimpan banyaknya elemen pada array


void input() {			// Procedure untuk input
	while (true) {		// Looping
		cout << "masukan banyaknya elemen pada array : ";	// Output pada layar
		cin >> n;		// Input dari pengguna
		if (n <= 20)	// Jika n kurang dari atau sama dengan 20
			break;		// Keluar dari loop
		else {			// Jika n lebih dari 20
			cout << "\nArray dapat mempunyai maksimal 20 elemen.\n"; // Output ke layar
		}
	}
	cout << endl;								// Output baris kosong
	cout << "====================" << endl;		// Output ke layar
	cout << "Masukan Elemen Array" << endl;		// Output ke layar
	cout << "====================" << endl;		// Output ke layar

	for (int i = 0; i < n; i++) {					// Looping dengan i dimulai dari 0 hingga n-1
		cout << "Data ke" << (i + 1) << ">";		// Output ke layar
		cin >> a[i];								// Input dari pengguna
	}
}

void display() {	// Procedure untuk menampilkan hasil
	cout << endl;	// Output baris kosong
	cout << "=================================" << endl;	// Output ke layar
	cout << "Element Array yang telah tersusun" << endl;	// Output ke layar
	cout << "=================================" << endl;	// Output ke layar
	for (int j = 0; j < n; j++) {				// Looping dengan j dimulai dari 0 hingga n-1
		cout << a[j] << endl;					// Output ke layar
	}											// Output ke baris kosong
	cout << endl;
}

void bubbleSortArray() {	// Procedure untuk mengurutkan array dengan metode bubble sort
	for (int i = 1; i < n; i++) {			// Looping dengan i dimulai dengan 0 hingga n-1
		for (int j = 0; j < n - i; j++) {	// Looping dengan j dimulai dari 0 hingga n-1
			if (a[j] > a[j + 1]) {			// Simpan nilai a[j] ke variabel sementara temp
				int temp = a[j];			// Assign nilai a[j+1] ke a[j]
				a[j] = a[j + 1];			// Assign nilai temp ke a[j+1}
				a[j + 1] = temp;
			}
		}
	}
}
	


int main() {	
	input();			// Memanggil read()
	bubbleSortArray();	// Memamnggil bubbleSortArray()
	display();			// Memanggil display()
	return 0;
}