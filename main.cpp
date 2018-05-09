#include <iostream>
#include "topla.h"//dosyayý çaðýr
using namespace std;

int main(){
	float sonuc;
	topla t1;//sýnýfý çaðýr yani sýnýf nesnesi oluþtur
	float sayi1,sayi2;
	cout<<"sayi1 gir\n";
	cin>>sayi1;
	cout<<"sayi2 gir\n";
	cin>>sayi2;
	sonuc = t1.sayilariTopla(sayi1,sayi2);//girilen sayýlarý paremetre olarak fonksiyona gönder
	cout<<"toplam sonuc: "<<sonuc;//sonucu yazdýr
}
