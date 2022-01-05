#include <iostream>
using namespace std;

struct bebas {
    string tipe_rumah;
    int jumlah_kamar;
};

int main() {
    bebas rumah1;
    void *alamat;
    
    //rumah1.tipe_rumah = "46A";
    alamat = &rumah1.tipe_rumah;
    cout << "Tipe Rumah : " << alamat << endl;
    
    //rumah1.jumlah_kamar = 20;
    alamat = &rumah1.jumlah_kamar;
    cout << "Jumlah Kamar : " << alamat << endl;;
    
    return 0;
}

/*
Tipe Rumah : A4012E
Jumlah Kamar : 9E3D01
*/
