#include<iostream>
using namespace std;
int main(){
	int fak=1;
	int sayi;
	int i;
	cout<<"Bir sayý giriniz:";
	cin>>sayi;
	for(i=1;i<=sayi;i++){
		fak*=i;
	}
	cout<<""<<sayi;
	cout<<"!="<<fak;
}
