#include <iostream>
using namespace std;

int arr[20], B[20]; // membuat array utama dan array sementara
int n; //menentukan input jumlah array

void input(){
    while (true){
        cout << "masukkan panjang element array : "; //menampilkan
        cin >> n; // membuat input

        if  (n <= 20){
            break;
        }
        else{
            cout << "\nMaksimal panjang array adalah 20";
        }
    }
    cout << "\n--------------------------" << endl;
    cout << "\nInputkan isi element array" << endl;
    cout << "\n--------------------------" << endl;

    for (int i = 0; i < n; i++){
        cout << "Array index ke- " << i << ":";
        cin >> arr[i];
    }
}

// membuat fungsi mergesort
void mergesort(int low, int high){
    if (low >= high){ // step 1
        return; // step 1a
    }
    int mid = (low + high) / 2; // step 2
}

