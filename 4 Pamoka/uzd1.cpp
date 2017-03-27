#include <iostream>
using namespace std;
main()
/* 
   1. Parašykite programą, kuri rastų skaičių
   nuo n iki m sumą ir sandaugą.
*/
{
    setlocale(LC_CTYPE, "");

    int m,n,suma,sand;
    sand = 1;
    suma = 0;


    cout << "Įveskite skaičių n: ";
    cin  >> n;
    cout << "Įveskite skaičių m: ";
    cin  >> m;

    for (n == n; n <= m; n++) {
        sand *= n;
        suma += n;
    }


    cout << "Suma: " << suma << " , daugyba: " << sand;
}
