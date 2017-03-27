#include <iostream>
using namespace std;
main()
/*
    2. Parašykite programą, kuri intervale nuo n iki m
    rastų skaičių, dalių iš trijų, kiekį.
*/
{
    setlocale(LC_CTYPE, "");

    int m,n,d3,mprad,nprad;


    cout << "Įveskite skaičių n: ";
    cin  >> n;
    cout << "Įveskite skaičių m: ";
    cin  >> m;

    mprad = m; nprad = n;
    for (n == n; n <= m; n++) {
        if (n % 3 == 0) {
            d3++;
        }
    }
    cout << "Skaičiaus " << nprad << " ir " << mprad << " intervale yra " << d3 << " dalūs iš trijų skaičiai.";
}
