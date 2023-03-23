#include <iostream>
using namespace std;

int arr[20];
int n;

void input() {   //prosedur input
    while (true) {
        cout << "Masukkan Jumlah Data Pada Array : ";  //input jumlah element
        cin >> n;  //memanggil inputan n

        if (n <= 20) {  //kondisi n tidak lebih dari 20
            break;
        }
        else {
            cout << "\nArray yang anda masukkan maksimal 20 element. \n";  //Menampilkan pesan berlebih
        }
    }
    cout << endl;  //membuat jarak
    cout << "=================================" << endl;   //tampilan
    cout << "MASUKKAN ELEMENT ARRAY" << endl;   //tampilan
    cout << "=================================" << endl;    //tampilan

    for (int i = 0; i < n; i++) {   //menggunakan perulangan untuk menyimpan
        cout << "Data ke-" << (i + 1) << ": ";
        cin >> arr[i];
    }
}

void insertionSort() {
    int temp; //variable data temporer / penyimpanan sementara
    int j; // variable J sebagai penanda

    for (int i = 1; i < n; i++) { //1. looping dengan i dimulai dari 1 hingga n - 1
        temp = arr[i];  //2. simpan nilai arr[i] ke variable sementara temp

        j = i - 1; //3. Setting nilai j sama dengan i-1

        while (j >= 0 && arr[j] > temp) {  //4. looping while dimana nilai j lebih besar sama dengan 0 dan array[j] lebih besar dari temp
            arr[j + 1] - arr[j];  //simpan arr[j] kedalam variable arr[j+1]
            j--; //j decrement
        }

        arr[j + 1] = temp; //simpan nilai temp ke dalam arr[j+1]

        cout << endl;
        cout << "\nPass " << i << ": ";  //output ke layar
        for (int k = 0; k < n; k++) {  //Looping nilai k dimulai dari 0 hingga n-1
            cout << arr[i] << " ";  //display output
        }
    }
}

void display() {
    cout << endl;
    cout << "Total Element Movement = " << n-1 << endl;
    cout << "\n=================================" << endl;
    cout << "Element Array yang telah Tersusun" << endl;
    cout << "\n=================================" << endl;

    for (int j = 0; j < n; j++) {  //looping dengan j dimulai dari 0 hingga n-1
        cout << arr[j] << endl; //output ke layar
    }
    cout << endl;   //output baris kosong
}

int main()
{
    input();
    insertionSort();
    display();
}
