//Verilen hak ile doğru şifreyi tahmin etme programı
#include<iostream>
using namespace std;
int main(){
	setlocale(LC_ALL, "Turkish");
	int sifre=123;
	int tahmin;
	int hak=3;
	while(true){
		cout<<"Þifreyi tahmin ediniz:";
		cin>>tahmin;
		if(sifre==tahmin){
			cout<<"Doðru tahmin.";
			break;
		}
		else{
			cout<<"Yanlýþ tahmin"<<endl;
			hak--;
			cout<<""<<hak;
			cout<<"Hakkýnýz kaldý"<<endl;
			if(hak==0){
				cout<<"Hakkýnýz bitmiþtir.";
				break;
			}
		}
	}
}
