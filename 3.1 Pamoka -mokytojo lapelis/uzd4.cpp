// Parašykite programą, kuri rastų, kiek skaitmenų,
// dalių iš 5, yra penkiaženkliame skaičiuje.
#include <iostream>
using namespace std;
main()
{
    setlocale(LC_CTYPE, "");
    int sk, s1, s2, s3, s4, s5, kiekis=0;

    cout << "Iveskite penkiazenkli skaiciu: ";
    cin  >> sk;

    s1 = sk / 10000;
    s2 = sk / 1000 % 10;
    s3 = sk / 100 % 10;
    s4 = sk / 10 % 10;
    s5 = sk % 10;

    if (s1 % 5 == 0 && s1 != 0) {
        kiekis++;
        }
    if (s2 % 5 == 0 && s2 != 0) {
        kiekis++;
        }
    if (s3 % 5 == 0 && s3 != 0) {
        kiekis++;
        }
    if (s4 % 5 == 0 && s4 != 0) {
        kiekis++;
        }
    if (s5 % 5 == 0 && s5 != 0) {
        kiekis++;
        }

    cout << "Siame skaiciuje daliu is 5 skaitmenu yra: " << kiekis;

}
