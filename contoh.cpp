#include <iostream>
using namespace std;

class PersegiPanjang
{
    public : // akses modifier;
    int panjang, lebar;

    public :

    void input ()
    {
        cout << "Masukan panjang :";
        cin >> panjang;
        cout << "Masukan lebar :";
        cin >> lebar;
    }

    int LuasPp( int a, int b)
    {
        return a*b;
    }

    Lingkaran ol;
};

class Lingkaran

{
public :
    int jarijari;

    void input ()
    {
        cout << "Masukan jari-jari :";
        cin >> jarijari;
    }

    int luasLingkaran (int r)

    {
        return 3.14 * r * r;
    }
};

int main()

{
    PersegiPanjang objekPP;
    Lingkaran ol;

    cout << "Masukan panjang :";
    cin >> objekPP.panjang;
    cout << "Masukan lebar :";
    cin >> objekPP.lebar;
    cout << "Luas persegi panjang :" <<
    objekPP.LuasPp(objekPP.panjang, objekPP.lebar) <<endl;

}

