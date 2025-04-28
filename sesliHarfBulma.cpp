#include<iostream>
#include<string>
using namespace std;
int main(){
	setlocale(LC_ALL, "Turkish");
	string paragraf;
	int sesliHarfSayisi;
	cout<<"Paragrafý giriniz:";
	getline(cin,paragraf);
	for(int i=0;i<=paragraf.length();i++){
		paragraf[i]=tolower(paragraf[i]);
		if(paragraf[i]=='a'||paragraf[i]=='e'||paragraf[i]=='ý'||paragraf[i]=='i'||paragraf[i]=='u'||
		paragraf[i]=='ü'||paragraf[i]=='o'||paragraf[i]=='ö'){
	
sesliHarfSayisi++;	}}
	cout<<"Sesli harf sayýsý:"<<sesliHarfSayisi<<endl;}

