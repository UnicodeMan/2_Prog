#include <iostream>
using namespace std;
main()
/*
    2. Parašykite programą, kuri intervale nuo n iki m
    rastų skaičių, dalių iš trijų, kiekį.
*/
{
    setlocale(LC_CTYPE, "");

    int m,n,d3=0,mprad,nprad,i;


    cout << "Įveskite skaičių n: ";
    cin  >> n;
    cout << "Įveskite skaičių m: ";
    cin  >> m;

    // Naudoti i vietoj n toliau---
    i = n;
    // Naudoti i vietoj n toliau---
    
    mprad = m; nprad = n;
    for (i; i <= m; i++) {
        if (i % 3 == 0) {
            d3++;
        }
    }
    cout << "Skaičiaus " << nprad << " ir " << mprad << " intervale yra " << d3 << " dalūs iš trijų skaičiai.";
}
