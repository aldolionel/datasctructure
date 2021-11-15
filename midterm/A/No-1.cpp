#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    int a;
    double b;
    string e;
    int *c;
    double *d;
    string f;
    a=87;
    b=3.14;
    e="Struktur Data";
    c=&a;
    d=&b;
    f=e;

    cout << "Alamat variabel a adalah : "  << &a << endl;
    cout << "Nilai variabel a adalah : " << a << endl;
    cout << "Alamat variabel b adalah : "  << &b << endl;
    cout << "Nilai variabel c adalah : " << *c << endl;
    cout << "Alamat variabel c adalah : "  << &c << endl;
    cout << "Nilai variabel d adalah : " << *d << endl;
    cout << "Alamat variabel f adalah : "  << &f << endl;
    cout << "Nilai variabel f adalah : " << f << endl;
}