#include<iostream>
using namespace std;

int main(){
    int i,dizi[10],boyut;
    
    cout << "Dizi boyutunu girin (en fazla 10): ";
    cin >> boyut;

    cout << "Dizi elemanlar�n� giriniz:" << endl;
    for (i = 0; i < boyut; i++) {
        cout << "dizi[" << i << "] = ";
        cin >> dizi[i];
    }

    cout << "Dizinin tersten yaz�l���: ";
    for (i = boyut - 1; i >= 0; i--) {
        cout << dizi[i] << " ";
    }
    cout << endl;
    
    return 0;
}

