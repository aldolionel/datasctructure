//Program 2 ( UTS Soal 2 - Array 2 Dimensi )
#include <iostream>
using namespace std ;

int main() {
	int x[2][3] = {{ 10, 20, 30 }, { 40, 50, 60 }} ; 
	int i, j ;
 
	for ( i = 0; i < 2; i++ ) { 		
		for ( j =0; j< 3; j++ ) { 		
		printf ( " %d " , x[i][j] ) ; 	
	}
	printf("\n") ; 
	}
	return 0 ;
}