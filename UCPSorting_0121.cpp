//Soal tipe A
//1.Jelaskan bagaimana insertsionSort membandingkan serta menukar elemen-elemen?
  //InsertionSort membandingkan dengan cara membagi array menjadi 2 bagian yang belum tersortir dan yang sudah tersortir
  //Menyortir array satu persatu, memastiakan elemen sudah benar 
  //Jika telah tersortir, masukan ke dalam bagian yang telah disortir
  //Melakukan pembandingan array dari yang terkecil ke yang besar 
//2.Jelaskan bagaimana SelectionSort membandingkan serta menukar elemen-elemen?
  //SelectionSort membandingkan dengan cara mengurutkan array dr yang terbesar ke yang kecil
//3.Dalam algoritma sortir, bagaimana cara untuk mengetahui jumlah langkah yang dilakukan? jelaskan.
  //Menentukan jumlah array dan mengitung penyortiran yang telah dilakukan variabel J 

#include <iostream>
using namespace std;

int razzin[21];
int n;

void input() {
    while (true) {
        cout << "Masukan banyak elemen pada array : ";
        cin >> n;
        if (n <= 21)
            break;
        else {
            cout << "\nArray dapat mempunyai maksimal elemen 21 elemen.\n";

        }
    }
    cout << endl;
    cout << "=====================" << endl;
    cout << "Masukan Elemen Array" << endl;
    cout << "=====================" << endl;

    for (int i = 0; i < n; i++) {
        cout << "Data ke-" << (i + 1) << ": ";
        cin >> razzin[i];
    }

}

void SelectionSort() {
    int i, j, sin_idx;

    for (int i = 0; i <= n - 1; i++) {

        sin_idx = i;

        for (j = 1 + 1; j < n; j++) {
            if (razzin[j] < razzin[sin_idx])

            sin_idx = j;
          

        }
        swap(razzin[sin_idx],razzin[i]);
    }


}

void display() {
    cout << endl;
    cout << "=================================" << endl;
    cout << "Elemen Array yang telah tersusun" << endl;
    cout << "=================================" << endl;
    for (int j = 0; j < n; i++) {
        cout << razzin[j] << endl; // Output each array element on a new  line
    }
    cout << "Jumlah pass =" << n - 1 << endl; // corectly shows the total number of elements
}

int main() {

    input();
    SelectionSort();
    display();
    system("pause");

    return 0;
