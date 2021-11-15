//Program 1 ( UTS Soal 1 )
#include <iostream>
using namespace std;

int main(){
	int a = 10 ;
	int b = 4 ;
	int c = a*b ;
	int *d = &a ;
	int *e = &b ;
	int *f = &c ;


	cout << " Alamat Variabel a Adalah 			: " << &a <<endl ;
	cout << " Alamat Variabel b Adalah 			: " << &b <<endl ;
	cout << " Isi Variabel c Adalah    			: " << c <<endl ;
	cout << " Alamat Variabel c Adalah 			: " << &c <<endl ;
	cout << " Isi Variabel d Adalah    			: " << d <<endl ;
	cout << " Alamat Variabel f Adalah 			: " << &f <<endl ;
	cout << " Isi Alamat yang ditunjuk f Adalah 		: " << f <<endl ;
	cout << " Isi Variabel e Adalah    			: " << e <<endl ;
return 0;
}
