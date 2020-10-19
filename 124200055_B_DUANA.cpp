#include <iostream>
#include <string>

using namespace std;

 main()
{
    float uts,uas,akhir;
    string Nama,Nim;
    cout << "TUGAS PRAKTIKUM ALGORITMA \n Nama : Duana Puspitaningrum \n NIM  : 124200055\n";
    cout << "----------------------------------------------------------------------------------";
    cout << endl;
    cout << endl;
    cout << "                          NILAI AKHIR MAHASISWA\n";
    cout << "----------------------------------------------------------------------------------\n";
    cout << "Nama :";
    getline (cin,Nama);
    cout << "NIM  :";
    getline (cin,Nim);
    cout << endl;
    cout << "nilai uts= ";cin >> uts;
    cout << "nilai uas= ";cin >> uas;
    cout << "----------------------------------------------------------------------------------\n";
    akhir = (uas+uts)/2;
    cout << "nilai akhir= "<<akhir;
    return 0;
}
