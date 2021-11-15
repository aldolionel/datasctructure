//Program 3 ( UTS Soal 3 )
#include <stdio.h>
#include <iostream>
using namespace std ;

struct TNode{
	int data ;
	TNode *next ;
};
TNode *head, *tail ;

void init(){
	head = NULL ;
	tail = NULL ;
}
int isEmpty(){
	if ( tail == NULL ) return 1 ;
	else return 0 ;
}

void input(int data){
	TNode *baru, *bantu ;
	baru = new TNode ;
	baru->data = data ;
	baru->next = NULL ;
	
	if ( isEmpty()==1 ){
		head = tail = baru ;
		head->next = NULL ;
	}
 else {
	baru->next = head ;
	head = baru ;
	}
}

void tampil(){
	TNode *bantu ;
	bantu = head ;
	
	if ( isEmpty()==0 ){
	while ( bantu!=NULL) {
    	cout << bantu->data << "->" ;
    	bantu = bantu->next ;
	}
	cout << " NULL " ;
	} else cout << " Masih kosong\n " ;
}


int main(){
	int a, data[10];
	cout << "Masukkan Banyak Data = " ;
	cin >> a;
 
	for (int i = 0; i < a; i++){
	cout << "Masukkan Data Senarai Ke-" << i+1 << " = ";  
	cin >>data[i] ;
	input(data[i]) ;
	}  cout << endl ;
	tampil() ;

    int min ; 
	int maks ; 
 
	for (int i = 0; i < a; i++){
	if (data[i] > maks){
		maks = data[i] ;
	}
	if (data[i] < min){
		min = data[i] ;
	}
	}
 
	cout << endl << endl ;
	cout << "Nilai Terbesar : " << maks <<endl ;
	cout << "Nilai Terkecil : " << min <<endl ;
}