//Basit hesap makinesi
#include<iostream>
#include<cmath>
#define M_PI 3.14
using namespace std;

int main() {
	setlocale(LC_ALL, "Turkish");
    int a,b;
    char islem;
    
    cout<<"Ýþlem yapmak istediðiniz iki sayýyý giriniz:";
    cin>>a>>b;

    cout<<"Yapmak istediðiniz iþlemi seçin:\n";
    cout<<"+  -> Toplama\n";
    cout<<"-  -> Çýkarma\n";
    cout<<"*  -> Çarpma\n";
    cout<<"/  -> Bölme\n";
    cout<<"s  -> Sinüs hesapla\n";
    cout<<"c  -> Kosinüs hesapla\n";
    cout<<"u  -> Üs alma\n";
    cout<<"k  -> Karekök alma\n";
    cout<<"Ýþlem= ";
     
    cin>>islem;

    double radyan1=a*M_PI/180.0;
    double radyan2=b*M_PI/180.0;

    switch(islem) {
        case '+':
            cout<<"Sonuç: "<<a+b<<endl;
            break;
        case '-':
            cout<<"Sonuç: "<<a-b<<endl;
            break;
        case '*':
            cout<<"Sonuç: "<<a*b<<endl;
            break;
        case '/':
            if (b!= 0)
                cout<<"Sonuç: "<<a/b<< endl;
            else
                cout<<"Hata: Sýfýra bölme!"<<endl;
            break;
        case 's':
            cout<<"Sin("<<a<<")= "<<sin(radyan1)<<endl;
            cout<<"Sin("<<b<<")= "<<sin(radyan2)<<endl;
            break;
        case 'c':
            cout<<"Cos("<<a<< ")= " <<cos(radyan1)<<endl;
            cout<<"Cos("<<b<< ")= " <<cos(radyan2)<<endl;
            break;
        case 'u':
            cout<<a<<"^"<<b<<" = "<<pow(a, b)<<endl;
            break;
        case 'k':
            cout<<"Karekök(" << a << ") = "<<sqrt(a)<<endl;
            cout<<"Karekök(" << b << ") = "<<sqrt(b)<<endl;
            break;
        default:
            cout<<"Geçersiz iþlem seçildi!"<<endl;
    }
    
    return 0;
}

