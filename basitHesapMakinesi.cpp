//Basit hesap makinesi
#include<iostream>
#include<cmath>
#define M_PI 3.14
using namespace std;

int main() {
	setlocale(LC_ALL, "Turkish");
    int a,b;
    char islem;
    
    cout<<"��lem yapmak istedi�iniz iki say�y� giriniz:";
    cin>>a>>b;

    cout<<"Yapmak istedi�iniz i�lemi se�in:\n";
    cout<<"+  -> Toplama\n";
    cout<<"-  -> ��karma\n";
    cout<<"*  -> �arpma\n";
    cout<<"/  -> B�lme\n";
    cout<<"s  -> Sin�s hesapla\n";
    cout<<"c  -> Kosin�s hesapla\n";
    cout<<"u  -> �s alma\n";
    cout<<"k  -> Karek�k alma\n";
    cout<<"��lem= ";
     
    cin>>islem;

    double radyan1=a*M_PI/180.0;
    double radyan2=b*M_PI/180.0;

    switch(islem) {
        case '+':
            cout<<"Sonu�: "<<a+b<<endl;
            break;
        case '-':
            cout<<"Sonu�: "<<a-b<<endl;
            break;
        case '*':
            cout<<"Sonu�: "<<a*b<<endl;
            break;
        case '/':
            if (b!= 0)
                cout<<"Sonu�: "<<a/b<< endl;
            else
                cout<<"Hata: S�f�ra b�lme!"<<endl;
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
            cout<<"Karek�k(" << a << ") = "<<sqrt(a)<<endl;
            cout<<"Karek�k(" << b << ") = "<<sqrt(b)<<endl;
            break;
        default:
            cout<<"Ge�ersiz i�lem se�ildi!"<<endl;
    }
    
    return 0;
}

