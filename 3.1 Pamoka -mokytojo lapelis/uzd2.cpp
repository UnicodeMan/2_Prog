// Iš šešiaženklio skaičiaus išbraukti visus trejetus ir penketus.
// //neatitinka reikalavimų:
// //skaičius be trejetų ir penketų turi būti viename kintamajame!
#include <iostream>
using namespace std;
int main ()
{
    setlocale(LC_CTYPE, "");
    int sk, s1, s2, s3, s4, s5, s6,sk2 = 0;
    cout << "Iveskite sesiazenkli skaiciu: ";
    cin >> sk;

    s1 = sk / 100000; //% 10; //nebūtina
    s2 = sk /  10000 % 10;
    s3 = sk /   1000 % 10;
    s4 = sk /    100 % 10;
    s5 = sk /     10 % 10;
    s6 = sk          % 10;



    if (s1 != 5 && s1 != 3) {
        sk2 = (sk2 + s1) * 10;
    }
    if (s2 != 5 && s2 != 3) {
        sk2 = (sk2 + s2) * 10;
    }
    if (s3 != 5 && s3 != 3) {
        sk2 = (sk2 + s3) * 10;
    }
    if (s4 != 5 && s4 != 3) {
        sk2 = (sk2 + s4) * 10;
    }
    if (s5 != 5 && s5 != 3) {
        sk2 = (sk2 + s5) * 10;
    }
    if (s6 != 5 && s6 != 3) {
        sk2 = (sk2 + s6) * 10;
    }
    sk2 = sk2 / 10;
    cout << "Naujas skaicius: " << sk2;
}
