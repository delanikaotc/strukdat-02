/*
Author      : Delanika Olympiani Trieswari Caesarini
NPM         : 140810180026
Deskripsi   : Program ini menampilkan fizz untuk setiap kelipatan 3, buzz untuk keliapatn 5, fizzbuzz untuk kelipatan 3 dan 5
Tahun       : 2019
*/
#include <iostream>

using namespace std;

void moveZeroToFront (int array[],int n);
void input (int (&arr)[100], int& n);
void output(int arr[], int n);

int main()
{
    int array[100], n;
    moveZeroToFront(array, n)
    input(array, n)
    output(array, n)
    return 0;
}

void moveZeroToFront (int array[],int n){
    for(n=0, n<=100, n++){
        for (int j=0, j<=n, j++){
                if (arr[j]==0){
                    swap(arr[j], arr[n]);
        }

    }
}
void input (int (&arr)[100], int& n){
    for(n=1; n<=100; n++){
        cin>>arr.[n];
    }
}
void output(int arr[], int n){
    for(n=0, n<=100, n++){
        cout<<arr[n]<<endl;
    }
}

