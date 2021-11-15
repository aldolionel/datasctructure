#include <iostream>
using namespace std;

int main(){
    int nilai[10];

    //input data
    for (int i=0;i<10;i++){
        cout << "Data Ke " << i << ": "; cout << endl;
        cout << " Nilai : " ;
        cin >> nilai[i];       
    }
    
    //menampilkan data
    cout << "\nOutput Nilai : " << endl; 
    
    for (int i=0;i<10;i++){
            cout << "Nilai ke " << i << " : " << nilai[i] <<endl;
            cout << "Alamat nilai ke " << i << " : " << &nilai[i] <<endl;
        }
}