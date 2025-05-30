//Basit bir ��renci ��retmen program�
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
		
		//Not ortalamas�na g�re harflendirme sistemi
		string harfNotu(){
		if(final<=50)return "FF";
        if(ort>=85) return "AA";
        else if(ort>70) return "BB";
        else if(ort>55) return "CC";
        else if(ort>40) return "DD";
        else if(ort>25) return "EE";
        else return "FF";
		}	
		//��rencinin bilgilerini g�rd��� k�s�m
		void yazdir(){
			cout<<"\n�sim:"<<isim<<endl;
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
	list<ogrenci>ogrListesi;//��rencilerin tutldu�u liste
	int secim;
	
	while(true){
		cout<<"\nSistemimize ho�geldiniz.(��renci:1,��retmen:2,��k��:0):";
			cin>>secim;
			if(secim==0)
			break;
			if(secim==2){
				int personelNo;
				cin.ignore();//Bir �ceki cinden kalanlar� temizler 
				cout<<"Personel numaran�z� girin:";
				cin>>personelNo;
				cin.ignore(); 
				ogrenci yeni;
            cout<<"��renci ismi: ";
            getline(cin,yeni.isim);
            cout<<"��renci soyismi: ";
            getline(cin,yeni.soyisim);
            cout<<"��renci numaras�: ";
            cin>>yeni.no;
            cout<<"Vize notu: ";
            cin>>yeni.vize;
            cout<<"Final notu: ";
            cin>>yeni.final;
            yeni.ort=yeni.vize*0.4+yeni.final*0.6;
            ogrListesi.push_back(yeni);//ekleme fonksiyonu
            cout<<"��renci ba�ar�yla eklendi.\n";
			}
			  else if(secim==1) {
            int ogrNo;
            cout<<"Okul numaran�z� giriniz: ";
            cin>>ogrNo;
            bool bulundu=false;           
//listeyi tek tek dola�,auto& ogr:listedeki her bir ogrenci nesnesine s�ras�yla ogr takma ad� verilir
//&:Referansla i�lem yapar, yani listedeki ��rencinin bir kopyas�n� de�il kendisini kullan�r
            for(auto&ogr:ogrListesi){
                if(ogr.no==ogrNo){
                    ogr.yazdir();
                    bulundu=true;
                    break;
                }
            }
            if(!bulundu)
            cout<<"��renci bulunamad�.\n";
        }
        else 
        cout<<"Ge�ersiz se�im!\n";   
    }

cout<<"\n---- ��renci Listesi ----\n";
    for(auto&ogr:ogrListesi){
        ogr.yazdir();
        cout<<endl;
    }
}
