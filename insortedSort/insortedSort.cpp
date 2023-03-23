#include <iostream>
using namespace std;

int arr[20];
int n;

void input() {
    while (true) {
        cout << "Masukkan Jumlah Data Pada Array : ";
        cin >> n;

        if (n <= 20) {
            break;
        }
        else {
            cout << "\nArray yang anda masukkan maksimal 20 element. \n";
        }
    }
    cout << endl;
    cout << "=================================" << endl;
    cout << "MASUKKAN ELEMENT ARRAY" << endl;
    cout << "=================================" << endl;

    for (int i = 0; i < n; i++) {
        cout << "Data ke-" << (i + 1) << ": ";
        cin >> arr[i];
    }
}

void insertionSort() {
    int temp;
    int j;

    for (int i = 1; i < n; i++) {
        temp = arr[i];

        j = i - 1;

        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] - arr[j];
            j--;
        }

        arr[j + 1] = temp;

        cout << endl;
        cout << "\nPass " << i << ": ";
        for (int k = 0; k < n; k++) {
            cout << arr[i] << " ";
        }
    }
}

void display() {
    cout << endl;
    cout << "Total Element Movement = " << n-1 << endl;
    cout << "\n=================================" << endl;
    cout << "Element Array yang telah Tersusun" << endl;
    cout << "\n=================================" << endl;

    for (int j = 0; j < n; j++) {
        cout << arr[j] << endl;
    }
    cout << endl;
}

int main()
{

}
