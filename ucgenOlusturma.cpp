#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Turkish");
    int a, b, c;
    cout << "��genin kenar uzunluklar�n� girin: ";
    cin >> a >> b >> c;
     if ((a+b>c) && (a+c>b) && (b+c>a)){
    	cout<<"Girilen de�erler ile bir ��gen elde edilir ve t�r�:";
    if (a == b && b == c)
        cout << " e�kenar ��gendir.";
    else if (a == b || b == c || a == c)
        cout << " ikizkenar ��gendir.";
    else
        cout << " �e�itkenar ��gendir.";
}
else
cout<<"Girilen de�erler ile bir ��gen elde edilmez.";
    return 0;
}

