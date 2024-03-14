#include <iostream>
using namespace std;

int arr[20];            // Membuat Array dengan panjang data 20
int n;                  // Membuat Variabel inputan n

void input() {          // Procedure Input
    while (true)
    {
        cout << "Masukan Jumlah Data pada Array : ";        // Membuat Inputan Jumlah element Array
        cin >> n;                                           // Memanggil variabel inputan n

        if (n <= 20) {                                      // Membuat kondisi n tidak lebih dari 20
            break;
        }
        else
        {
            cout << "\nArray yang anda masukan maksimal 20 elemen.\n"; // Menampilkan Pesan jika data lebih dari 20
        }
    }
    cout << endl;                                           // Membuat jarak per baris program
    cout << "====================" << endl;                 // Membuat tampilan susunan data element Array
    cout << "Masukan Element Array" << endl;
    cout << "====================" << endl;

    for (int i = 0; i < n; i++)                             // Menggunakan perulangan for untuk menyimpan data pada Array
    {
        cout << "Data ke-" << (i + 1) << ": ";              // Memasukan atau menginputkan nilai data n
        cin >> arr[i];                                      // Meyimpan nilai data n kedalam Array arr
    }
}

void insertionsort() {                                      // Procedure Insertionsort

    int temp;                                               // Membuat variabel data temporer atau penyimpanan sementara
    int i, j;                                               // Membuat variable j sebagai penanda

    for (i = 1; i <= n - 1; i++) {                          // 1. Looping dengan i dimulai dari 1 hingga n-1

        temp = arr[i];                                      // 2. Simpan nilai arr[i] ke variabel sementara temp

        j = i - 1;                                          // 3. Setting nilai j sama dengan i-1

        while (j >= 0 && arr[j] > temp)                     // 4. Looping while dimana nilai j lebih besar sama dengan 0 dan
            // arr[j] lebih besar daripada temp
        {
            arr[j + 1] = arr[j];                            // 4a. Simpan arr[j] ke dalam variabel arr[j]
            j--;                                            // 4b. Decrement nilai j by 1
        }
        arr[j + 1] = temp;                                  // 5. Simpan nilai temp ke dalam arr[j+i]


        cout << "\nPass " << i << ": ";                     // Output ke layar
        for (int k = 0; k < n; k++) {                       // Looping nilai k dimulai dari 0 hingga 1
            cout << arr[k] << " ";                          // Output ke layar
        }
    }
}

void display() {                                             // Procedure Display
    cout << endl;                                           // Output baris kosong
    cout << "\n===============================" << endl;    // Output ke layar
    cout << "Element Array yang telah tersusun" << endl;    // Output ke layar
    cout << "=================================" << endl;    // Output ke layar

    for (int j = 0; j < n; j++) {                           // Looping dengan j dimulai dari 0 hingga n-1
        cout << arr[j] << endl;                             // Output ke layar
    }
    cout << endl;                                           // Output baris kosong

}

    int main(){
        input();                                                // Memanggil input
        insertionsort();                                        // Memanggil insertionsort
        display();                                              // Memanggil display
}