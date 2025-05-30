//Bilgisayara karþý taþ kaðýt makas oyunu
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
	setlocale(LC_ALL, "Turkish");
	srand(time(0));
    int secim;
    int skor=0;
    int pc=0; 
    string isim;
    cout<<"Lütfen oyunda kullanýlacak isminizi giriniz:";
    getline(cin,isim);
    
	while(true){
	//Kullanýcýdan seçimi alýnýr
	cout<<"Taþ(1) Kaðýt(2) Makas(3) Çýkýþ(0)"<<endl;
	cout<<"Belirtilen rakamlardan bir seçim yapýn:";
	cin>>secim;
    
    if(secim==0)
	break;
	
	int r=rand()%3+1;
	//Bilgisayarýn seçimi alýnýr
	cout<<"Bilgisayarýn seçimi:";
	if(r==1)
	cout<<"Taþ"<<endl;
	else if(r==2)
	cout<<"Kaðýt"<<endl;
	else 
	cout<<"Makas"<<endl;
	 
	//Seçimler karþýlaþtýrýlýr
	if(secim==r)
	cout<<"Berabere"<<endl;
	else if((r==1 && secim==2)||(r==2 && secim==3)||(r==3 && secim==1)){
		cout<<"Harika siz kazandýnýz"<<endl;
		skor++;
	}
    else{
    	cout<<"Hay aksi bilgisayar kazandý"<<endl;
    	pc++;
	}
  }
  //Sonuçlar yazdýrýlarak kazanan belirlenir
  cout<<"---------SONUÇ TABLOSU---------"<<endl;
  cout<<isim<<":"<<skor<<endl;
  cout<<"Bilgisayarýn puaný:"<<pc<<endl;
  if(skor>pc)
  cout<<"Bilgisayarý yendiniz.Tebrikler.";
  else if(pc>skor)
  cout<<"Ne yazik ki bilgisayar seni yendi.";
  else if(pc==skor)
  cout<<"Berabere bitti.";
}

