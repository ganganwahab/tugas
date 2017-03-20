#include <iostream>
using namespace std;

//prototype
void prosesBaca() ;
void prosestukar() ;
void prosestampil() ;

//variabel global
    int a, b, temp ;
	//program utama
	prosesBaca();
	prosestukar();
	prosestampil();
	return 0;
	
	
	void prosesbaca () {
	cout <<"masukan nilai a:";
	cin>> a ;
	
	cout <<"masukan nilai b :";
	cin>> b ;
	
	void prosestukar(){
		temp= b; 
		b=a;
		a=temp;
	}
	
	void prosestampil(){
		cout <<"___________"<<endl;
		cout <<"nilai a sekarang:"<< a << endl;
	cout <<"nilai b sekarang:"<< b ;
	}