//Bilgisayara kar�� ta� ka��t makas oyunu
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
    cout<<"L�tfen oyunda kullan�lacak isminizi giriniz:";
    getline(cin,isim);
    
	while(true){
	//Kullan�c�dan se�imi al�n�r
	cout<<"Ta�(1) Ka��t(2) Makas(3) ��k��(0)"<<endl;
	cout<<"Belirtilen rakamlardan bir se�im yap�n:";
	cin>>secim;
    
    if(secim==0)
	break;
	
	int r=rand()%3+1;
	//Bilgisayar�n se�imi al�n�r
	cout<<"Bilgisayar�n se�imi:";
	if(r==1)
	cout<<"Ta�"<<endl;
	else if(r==2)
	cout<<"Ka��t"<<endl;
	else 
	cout<<"Makas"<<endl;
	 
	//Se�imler kar��la�t�r�l�r
	if(secim==r)
	cout<<"Berabere"<<endl;
	else if((r==1 && secim==2)||(r==2 && secim==3)||(r==3 && secim==1)){
		cout<<"Harika siz kazand�n�z"<<endl;
		skor++;
	}
    else{
    	cout<<"Hay aksi bilgisayar kazand�"<<endl;
    	pc++;
	}
  }
  //Sonu�lar yazd�r�larak kazanan belirlenir
  cout<<"---------SONU� TABLOSU---------"<<endl;
  cout<<isim<<":"<<skor<<endl;
  cout<<"Bilgisayar�n puan�:"<<pc<<endl;
  if(skor>pc)
  cout<<"Bilgisayar� yendiniz.Tebrikler.";
  else if(pc>skor)
  cout<<"Ne yazik ki bilgisayar seni yendi.";
  else if(pc==skor)
  cout<<"Berabere bitti.";
}

