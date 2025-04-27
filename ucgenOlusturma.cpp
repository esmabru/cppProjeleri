#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Turkish");
    int a, b, c;
    cout << "Üçgenin kenar uzunluklarýný girin: ";
    cin >> a >> b >> c;
     if ((a+b>c) && (a+c>b) && (b+c>a)){
    	cout<<"Girilen deðerler ile bir üçgen elde edilir ve türü:";
    if (a == b && b == c)
        cout << " eþkenar üçgendir.";
    else if (a == b || b == c || a == c)
        cout << " ikizkenar üçgendir.";
    else
        cout << " çeþitkenar üçgendir.";
}
else
cout<<"Girilen deðerler ile bir üçgen elde edilmez.";
    return 0;
}

