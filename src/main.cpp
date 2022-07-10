// exceptions
#include <iostream>
#include <cmath>
using namespace std;

class kalkulator {
    private:
        int num1;
        int num2;
        int hasil;

    public:
        int tambah(int isiNum1, int isiNum2) {
            kalkulator::num1 = isiNum1;
            kalkulator::num2 = isiNum2;
            hasil = kalkulator::num1 + kalkulator::num2;
            return hasil;
        };
        int kurang(int isiNum1, int isiNum2) {
            kalkulator::num1 = isiNum1;
            kalkulator::num2 = isiNum2;
            hasil = kalkulator::num1 - kalkulator::num2;
            return hasil;
        };
        int kali(int isiNum1, int isiNum2) {
            kalkulator::num1 = isiNum1;
            kalkulator::num2 = isiNum2;
            hasil = kalkulator::num1 * kalkulator::num2;
            return hasil;
        };
        int bagi(int isiNum1, int isiNum2) {
            kalkulator::num1 = isiNum1;
            kalkulator::num2 = isiNum2;
            hasil = kalkulator::num1 / kalkulator::num2;
            return hasil;
        };

};

int main () {
    int number1;
    int number2;
    string op;

    kalkulator hitungan;

    cout << "PROGRAM KALKULATOR" << endl;
    cout << "masukan angka pertama: ";
    cin >> number1;
    cout << "masukan operator tambah(+), kurang(-), kali(*), bagi(/), pangkat(**): ";
    cin >> op;
    cout << "masukan angka kedua: ";
    cin >> number2;

    if (op == "+") {
        cout << hitungan.tambah(number1, number2) << endl;
    } else if (op == "-") {
        cout << hitungan.kurang(number1,number2) << endl;
    } else if (op == "*") {
        cout << hitungan.kali(number1,number2) << endl;
    } else if (op == "/") {
        cout << hitungan.bagi(number1,number2) << endl;
    } else if (op == "**") {
        cout << pow(number1,number2) << endl;
    } else {
        cout << "operator yang anda masukan tidak sesuai yang diperintahkan coyy " << endl;
    }



    
}

