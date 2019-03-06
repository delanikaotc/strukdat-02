/*
Author      : Delanika Olympiani Trieswari Caesarini
NPM         : 140810180026
Deskripsi   :
Tahun       : 2019
*/

#include <iostream>
#include <string.h>

using namespace std;

struct Org{
    int umur;
    char nama[30];
    char JK[2];
    char goldar[1];
    };

int main()
{
    Org orang;
    orang.umur=18;
    strcpy(orang.nama, "dela");
    strcpy(orang.JK, "P");
    strcpy(orang.goldar, "O");

    cout<<orang.umur<<endl;
    cout<<orang.nama<<endl;
    cout<<orang.JK<<endl;
    cout<<orang.goldar<<endl;


    return 0;
}
