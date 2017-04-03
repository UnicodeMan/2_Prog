// Iš šešiaženklio skaičiaus išbraukti visus trejetus ir penketus.
// neatitinka reikalavimų:
// skaičius be trejetų ir penketų turi būti viename kintamajame!
#include <iostream>
using namespace std;
int main ()
{
    setlocale(LC_ALL, "Lithuanian");
    int sk, s1, s2, s3, s4, s5, s6, kiekis;
    cout << "Įveskite šešiaženklį skaičių: ";
    cin >> sk;

    s1 = sk / 100000 % 10;
    s2 = sk /  10000 % 10;
    s3 = sk /   1000 % 10;
    s4 = sk /    100 % 10;
    s5 = sk /     10 % 10;
    s6 = sk          % 10;

    if (s1 == 5 || s1 == 3) {}
    else {
        cout << s1;
    }
    if (s2 == 5 || s2 == 3) {}
    else {
        cout << s2;
    }
    if (s3 == 5 || s3 == 3) {}
    else {
        cout << s3;
    }
    if (s4 == 5 || s4 == 3) {}
    else {
        cout << s4;
    }
    if (s5 == 5 || s5 == 3) {}
    else {
        cout << s5;
    }
    if (s6 == 5 || s6 == 3) {}
    else {
        cout << s6;
    }
}
