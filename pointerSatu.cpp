#include <iostream>
using namespace std;

class bangunDatar;
class persegiPanjang{
    public :
    void inputData(bangunDatar &bd);
    void outputData(bangunDatar &bd);
   
    
};

class bangunDatar{
    private :
    float panjang;
    float lebar;
    float hitungLuas(){
        return panjang * lebar;
    };
    float hitungKeliling(){
        return 2 * (panjang + lebar);
    };
    public :
    friend void persegiPanjang::inputData(bangunDatar &bd);
    friend void persegiPanjang::outputData(bangunDatar &bd);
   
};

void persegiPanjang::inputData(bangunDatar &bd){
    cout << "panjang : ";
    cin >> bd.panjang;
    cout << "lebar : ";
    cin >> bd.lebar;
}
void persegiPanjang::outputData(bangunDatar &bd){
    cout << "Luas : " << bd.hitungLuas() << endl;
    cout << "Keliling : " << bd.hitungKeliling() << endl;
};

int main(){
    bangunDatar bd;
    persegiPanjang pp;
    pp.inputData(bd);
    pp.outputData(bd);
   
}
