#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
	setlocale(LC_ALL, "Turkish");
	srand(time(0));
	int r=rand()%50+1;
	int tahmin;
	cout<<"Bir say� tahmin ediniz:";
	cin>>tahmin;
	while(true){
		if(tahmin<r){
			cout<<"Daha b�y�k bir say� tahmin ediniz:";
			cin>>tahmin;
		}
		else if(tahmin>r){
			cout<<"Daha k���k bir say� tahmin ediniz:";
			cin>>tahmin;
		}
		else{
		cout<<"Do�ru bildiniz"; 
		break;}
	}
}
