#include <iostream>
using namespace std;

int main (){
    double a, b, c;

    cout << "HALOO GAIS DI TEMPAT PERURUTAN ANGKA TERBESAR" <<endl<<endl;

    cout << "Masukkan angka pertama: ";
    cin >> a;
    cout << "Masukkan angka kedua: ";
    cin >> b;
    cout << "Masukkan angka ketiga: ";
    cin >> c;

    if (a >= b && a>= c){
        cout << "Angka terbesar adalah: " << a <<endl<<endl;
    } else if (b >= a && b >= c) {
        cout << "Angka terbesar adalah: " << b <<endl<<endl;
    } else {
        cout << "Angka terbesar adalah: " << c <<endl<<endl;
    }

    return 0;
}
