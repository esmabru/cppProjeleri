//Girilen değerlere göre üçgen olup olmadığını belirler.Üçgen ise de türünü belirler.
#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Turkish");
    int a, b, c;
    cout << "Üçgenin kenar uzunluklarını girin: ";
    cin >> a >> b >> c;
     if ((a+b>c) && (a+c>b) && (b+c>a)){
    	cout<<"Girilen değerler ile bir üçgen elde edilir ve türü:";
    if (a == b && b == c)
        cout << " eşkenar üçgendir.";
    else if (a == b || b == c || a == c)
        cout << " ikizkenar üçgendir.";
    else
        cout << " çeşitkenar üçgendir.";
}
else
cout<<"Girilen değerler ile bir üçgen elde edilmez.";
    return 0;
}

