    #include <iostream>
    using namespace std;

    int main() {
        int pilih;
        float luas;

        cout << "SELAMAT DATANG DI PERHITUNGAN LUAS BIDANG DATAR" << endl;
        cout << "=================================================" << endl << endl;
        cout << "Ketik angka (1-3) untuk hitung luas dari : " << endl;
        cout << "1. Persegi" << endl;
        cout << "2. Persegi Panjang" << endl;
        cout << "3. Segitiga" << endl;
        cout << "===================" << endl;
        cout << "Ketik angka (1-3): ";
        cin >> pilih;
        cout << "===================" << endl;

        switch (pilih) {
            case 1:
                float sisi;
                cout << "~~~ Menghitung Luas Persegi ~~~" << endl << endl;
                cout << "Masukkan nilai sisi (cm) : ";
                cin >> sisi;
                luas = sisi * sisi;

                cout << "\nDiketahui: \nPanjang sisi (cm) : " << sisi << " cm" << endl;
                cout << "\nJadi: \nLuas persegi: \n= s x s\n= " << sisi << " x " << sisi << "\n= " << luas << " cm^2" << endl;
                break;
            case 2:
                float panjang, lebar;
                cout << "~~~ Menghitung Luas Persegi Panjang ~~~" << endl << endl;
                cout << "Masukkan nilai panjang (cm) : ";
                cin >> panjang;
                cout << "Masukkan nilai lebar (cm) : ";
                cin >> lebar;
                luas = panjang * lebar;

                cout << "\nDiketahui:" << endl;
                cout << "Panjang (p) : " << panjang << " cm" << endl;
                cout << "Lebar (l) : " << lebar << " cm" << endl;
                cout << "\nJadi: \nLuas persegi panjang : \n= p x l\n= " << panjang << " x " << lebar << "\n= " << luas << " cm^2" << endl;
                break;
            case 3:
                float tinggi, alas;
                cout << "~~~ Menghitung Luas Segitiga ~~~" << endl << endl;
                cout << "Masukkan nilai alas (cm) : " ;
                cin >> alas;
                cout << "Masukkan nilai tinggi (cm) : " ;
                cin >> tinggi;
                luas = 0.5 * alas * tinggi;

                cout << "\nDiketahui: \nAlas (a) : " << alas << " cm" << endl;
                cout << "tinggi (t) : " << tinggi << " cm\n" << endl;
                cout << "\nJadi: \nLuas segitiga : \n= 1/2 x a x t\n= 1/2 x " << alas << " x " << tinggi << "\n= " << luas << " cm^2" << endl;
                break;
            default:
                cout << "Pilih Angka sesuai instruksi! " << endl;
                return 0;
                break;
            }



        return 0;
    }
