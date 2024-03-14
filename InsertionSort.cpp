#include <iostream>
using namespace std;

int arr[20];            // Membuat Array dengan panjang data 20
int n;                  // Membuat Variabel inputan n

void input() {          // Procedure Input
    while (true)
    {
        cout << "Masukan Jumlah Data pada Array ; ";        // Membuat Inputan Jumlah element Array
        cin >> n;                                           // Memanggil variabel inputan n

        if (n <= 20) {                                      // Membuat kondisi n tidak lebih dari 20
            break;
        }
        else
        {
            cout << "\nArray yang anda masukan maksimal 20 elemen.\n"; // Menampilkan Pesan jika data lebih dari 20
        }
    }

    int main(); {
        
}