//Basit bir atm programý
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
class atm{
	public:
		string tc;
		int bakiye;
		bool Sifre(){
			int sifre=123;
			int girilen;
			int hak=3;
			while(hak>0){
				cout<<"Lütfen kart þifrenizi giriniz:";
			cin>>girilen;
			if(girilen==sifre){
				cout<<"Þifre doðru yapmak istediðiniz iþleme geçebilirsiniz"<<endl;
				srand(time(0));
		    bakiye=rand()%1000+1;//rastgele bakiye dödürme
		    cout<<"Var olan bakiyeniz: "<<bakiye<<endl;
		    return true;
			}
			else{
				hak--;
			cout<<"Þifre yanlýþ!";
			cout<<"Kalan hakkýnýz: "<<hak<<endl;}
			}
            cout<<"Hakkýnýz bitmiþtir";
		    return false;
			}
			//Para çekme fonksiyonu
		void bakiyeBilgisi(){
		int cekilen;
		cout<<"Çekmek istediðiniz miktarý giriniz:";
		cin>>cekilen;
		if(cekilen<=0){
		cout<<"Hatalý iþlem!Lütfen pozitif sayý giriniz:";
		cin>>cekilen;
		bakiye-=cekilen;
		cout<<"Kalan bakiyeniz: "<<bakiye<<endl;
		}		
		else if(cekilen>bakiye)
		cout<<"Hesabýnýzda çekmek istediðiniz miktarda para bulunmamaktadýr.";
		else{
		bakiye-=cekilen;
		cout<<"Kalan bakiyeniz: "<<bakiye<<endl;
		}
		
	}
	//Para yatýrma fonksiyonu
	void yatirma(){
		int yatan;
		cout<<"Yatýrmak istediðiniz miktarý giriniz:";
		cin>>yatan;
		if(yatan<=0){
		cout<<"Hatalý iþlem!Lütfen pozitif sayý giriniz:";
		cin>>yatan;	
		bakiye+=yatan;
		cout<<"Toplam bakiyeniz "<<bakiye<<" TL oldu."<<endl;
		}
		else{
		bakiye+=yatan;
		cout<<"Toplam bakiyeniz "<<bakiye<<" TL oldu."<<endl;}
	}
	//Menü fonksiyonu
	void menu(){
	cout<<"1.Para çekme"<<endl;
	cout<<"2.Para yatýrma"<<endl;
	}	
};
int main(){
	setlocale(LC_ALL, "Turkish");
	int islem;
	atm musteri;
	if(!musteri.Sifre()) 
        return 0; 
	musteri.menu();
	cin>>islem;
	if(islem==1)
	musteri.bakiyeBilgisi();
	if(islem==2)
	musteri.yatirma();
	while(true){
	char devam;
	cout<<"Yapmak istediðiniz baþka iþlem var mý?(Var:+ yok:-):"<<endl;
	cin>>devam;
	if(devam=='+'){
		cout<<"Yapmak istediðiniz iþlemi seçiniz"<<endl;
	musteri.menu();
	cin>>islem;
	if(islem==1)
	musteri.bakiyeBilgisi();
	else if(islem==2)
	musteri.yatirma();
	}
	else 
	break;
 }
}


















