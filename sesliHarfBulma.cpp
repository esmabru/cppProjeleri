#include<iostream>
#include<string>
using namespace std;
int main(){
	setlocale(LC_ALL, "Turkish");
	string paragraf;
	int sesliHarfSayisi;
	cout<<"Paragraf� giriniz:";
	getline(cin,paragraf);
	for(int i=0;i<=paragraf.length();i++){
		paragraf[i]=tolower(paragraf[i]);
		if(paragraf[i]=='a'||paragraf[i]=='e'||paragraf[i]=='�'||paragraf[i]=='i'||paragraf[i]=='u'||
		paragraf[i]=='�'||paragraf[i]=='o'||paragraf[i]=='�'){
	
sesliHarfSayisi++;	}}
	cout<<"Sesli harf say�s�:"<<sesliHarfSayisi<<endl;}

