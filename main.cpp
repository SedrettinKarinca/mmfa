#include <iostream>
#include "topla.h"//dosyay� �a��r
using namespace std;

int main(){
	float sonuc;
	topla t1;//s�n�f� �a��r yani s�n�f nesnesi olu�tur
	float sayi1,sayi2;
	cout<<"sayi1 gir\n";
	cin>>sayi1;
	cout<<"sayi2 gir\n";
	cin>>sayi2;
	sonuc = t1.sayilariTopla(sayi1,sayi2);//girilen say�lar� paremetre olarak fonksiyona g�nder
	cout<<"toplam sonuc: "<<sonuc;//sonucu yazd�r
}
