#include <iostream>
using namespace std;

class mahasiswa{
    public :
    int nim;
    void showNim()
    {
        cout << "No Induk ="<<nim <<endl;
    }
};

int main (){
    mahasiswa mhs{1}; //objek mhs
    mhs.showNim(); //member acces operator

    mahasiswa &refMhs = mhs;// pointer reference refmhs
    refMhs.nim = 2; //member acces oprator
    mhs.showNim();
    mahasiswa * pMhs; //pointer reference refMhs
    pMhs -> nim = 3; //arrow operator 
}