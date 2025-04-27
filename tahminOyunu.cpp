#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
	setlocale(LC_ALL, "Turkish");//Türkçe karakterlerin görünmesi kodu
	srand(time(0));//Rastgele sayı üreticisini (random generator) başlatır.
	int r=rand()%50+1;//1 ile 50 arasında bir sayı üretir.
	int tahmin;
	cout<<"Bir sayı tahmin ediniz:";
	cin>>tahmin;
	while(true){
		if(tahmin<r){
			cout<<"Daha büyük bir sayı tahmin ediniz:";
			cin>>tahmin;
		}
		else if(tahmin>r){
			cout<<"Daha küçük bir sayı tahmin ediniz:";
			cin>>tahmin;
		}
		else{
		cout<<"Doğru bildiniz"; 
		break;}
	}
}
