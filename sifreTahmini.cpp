#include<iostream>
using namespace std;
int main(){
	setlocale(LC_ALL, "Turkish");
	int sifre=123;
	int tahmin;
	int hak=3;
	while(true){
		cout<<"�ifreyi tahmin ediniz:";
		cin>>tahmin;
		if(sifre==tahmin){
			cout<<"Do�ru tahmin.";
			break;
		}
		else{
			cout<<"Yanl�� tahmin"<<endl;
			hak--;
			cout<<""<<hak;
			cout<<"Hakk�n�z kald�"<<endl;
			if(hak==0){
				cout<<"Hakk�n�z bitmi�tir.";
				break;
			}
		}
	}
}
