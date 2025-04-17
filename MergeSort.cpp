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

    // step 3
    // fungsi rekursi - memanggil diri sendiri
    mergesort(low, mid); // step 3a
    mergesort(mid + 1, high); // step 3b

    // step 4
    int i = low;
    int j = mid + 1;
    int k = low;

    while (i <= mid && j <= high)
    {
        if (arr[i] <= arr[j])
        {
            B[k] = arr[i];
            i++;
        }
        else
        {
            B[k] = arr[j];
            j++;
        }
        k++;
    }

    while (j <= high)
    {
        B[k] = arr[j];
        j++;
        k = k + 1;
    }

    while (i <= mid)
    {
        B[k] = arr[i];
        i++;
        k++;
    }
}

