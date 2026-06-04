#include <iostream>
#include <exception>
#include <array>
using namespace std;

int main(){
    //menampilkan pesan awal program
  cout << "Awal program" << endl; 
    try
    {
        //membuat array dengan 3 elemen
        array <int, 3> data = { 1, 2, 3 };
        //mengakses elemen ke-5 dari array, yang berada di luar batas
        cout << data.at(5) << endl;
    }
    catch (exception& e)
    {
        //menangkap dan menampilkan pesan kesalahan yang terjadi
        cout << e.what() << endl;
    }
    // program tetap berjalan meskipun terjadi exception
    cout << "Baris program terakhir" << endl; //penanda 2
    return 0;
}