//Basit bir atm program�
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
				cout<<"L�tfen kart �ifrenizi giriniz:";
			cin>>girilen;
			if(girilen==sifre){
				cout<<"�ifre do�ru yapmak istedi�iniz i�leme ge�ebilirsiniz"<<endl;
				srand(time(0));
		    bakiye=rand()%1000+1;//rastgele bakiye d�d�rme
		    cout<<"Var olan bakiyeniz: "<<bakiye<<endl;
		    return true;
			}
			else{
				hak--;
			cout<<"�ifre yanl��!";
			cout<<"Kalan hakk�n�z: "<<hak<<endl;}
			}
            cout<<"Hakk�n�z bitmi�tir";
		    return false;
			}
			//Para �ekme fonksiyonu
		void bakiyeBilgisi(){
		int cekilen;
		cout<<"�ekmek istedi�iniz miktar� giriniz:";
		cin>>cekilen;
		if(cekilen<=0){
		cout<<"Hatal� i�lem!L�tfen pozitif say� giriniz:";
		cin>>cekilen;
		bakiye-=cekilen;
		cout<<"Kalan bakiyeniz: "<<bakiye<<endl;
		}		
		else if(cekilen>bakiye)
		cout<<"Hesab�n�zda �ekmek istedi�iniz miktarda para bulunmamaktad�r.";
		else{
		bakiye-=cekilen;
		cout<<"Kalan bakiyeniz: "<<bakiye<<endl;
		}
		
	}
	//Para yat�rma fonksiyonu
	void yatirma(){
		int yatan;
		cout<<"Yat�rmak istedi�iniz miktar� giriniz:";
		cin>>yatan;
		if(yatan<=0){
		cout<<"Hatal� i�lem!L�tfen pozitif say� giriniz:";
		cin>>yatan;	
		bakiye+=yatan;
		cout<<"Toplam bakiyeniz "<<bakiye<<" TL oldu."<<endl;
		}
		else{
		bakiye+=yatan;
		cout<<"Toplam bakiyeniz "<<bakiye<<" TL oldu."<<endl;}
	}
	//Men� fonksiyonu
	void menu(){
	cout<<"1.Para �ekme"<<endl;
	cout<<"2.Para yat�rma"<<endl;
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
	cout<<"Yapmak istedi�iniz ba�ka i�lem var m�?(Var:+ yok:-):"<<endl;
	cin>>devam;
	if(devam=='+'){
		cout<<"Yapmak istedi�iniz i�lemi se�iniz"<<endl;
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


















