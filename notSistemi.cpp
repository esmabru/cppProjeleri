//Basit bir öðrenci öðretmen programý
#include<iostream>
#include<list>
using namespace std;
class ogrenci{
	public:
		string isim;
		string soyisim;
		int no;
		int vize;
		int final;
		float ort;
		
		//Not ortalamasýna göre harflendirme sistemi
		string harfNotu(){
		if(final<=50)return "FF";
        if(ort>=85) return "AA";
        else if(ort>70) return "BB";
        else if(ort>55) return "CC";
        else if(ort>40) return "DD";
        else if(ort>25) return "EE";
        else return "FF";
		}	
		//Öðrencinin bilgilerini gördüðü kýsým
		void yazdir(){
			cout<<"\nÝsim:"<<isim<<endl;
			cout<<"Soyisim:"<<soyisim<<endl;
			cout<<"Numara:"<<no<<endl;
			cout<<"Vize:"<<vize<<endl;
			cout<<"Final:"<<final<<endl;
			cout<<"Ortalama:"<<ort<<endl;
			cout<<"Harflendirme:"<<harfNotu();
		}
};
int main(){
	setlocale(LC_ALL, "Turkish");
	list<ogrenci>ogrListesi;//Öðrencilerin tutlduðu liste
	int secim;
	
	while(true){
		cout<<"\nSistemimize hoþgeldiniz.(Öðrenci:1,öðretmen:2,Çýkýþ:0):";
			cin>>secim;
			if(secim==0)
			break;
			if(secim==2){
				int personelNo;
				cin.ignore();//Bir öceki cinden kalanlarý temizler 
				cout<<"Personel numaranýzý girin:";
				cin>>personelNo;
				cin.ignore(); 
				ogrenci yeni;
            cout<<"Öðrenci ismi: ";
            getline(cin,yeni.isim);
            cout<<"Öðrenci soyismi: ";
            getline(cin,yeni.soyisim);
            cout<<"Öðrenci numarasý: ";
            cin>>yeni.no;
            cout<<"Vize notu: ";
            cin>>yeni.vize;
            cout<<"Final notu: ";
            cin>>yeni.final;
            yeni.ort=yeni.vize*0.4+yeni.final*0.6;
            ogrListesi.push_back(yeni);//ekleme fonksiyonu
            cout<<"Öðrenci baþarýyla eklendi.\n";
			}
			  else if(secim==1) {
            int ogrNo;
            cout<<"Okul numaranýzý giriniz: ";
            cin>>ogrNo;
            bool bulundu=false;           
//listeyi tek tek dolaþ,auto& ogr:listedeki her bir ogrenci nesnesine sýrasýyla ogr takma adý verilir
//&:Referansla iþlem yapar, yani listedeki öðrencinin bir kopyasýný deðil kendisini kullanýr
            for(auto&ogr:ogrListesi){
                if(ogr.no==ogrNo){
                    ogr.yazdir();
                    bulundu=true;
                    break;
                }
            }
            if(!bulundu)
            cout<<"Öðrenci bulunamadý.\n";
        }
        else 
        cout<<"Geçersiz seçim!\n";   
    }

cout<<"\n---- Öðrenci Listesi ----\n";
    for(auto&ogr:ogrListesi){
        ogr.yazdir();
        cout<<endl;
    }
}
