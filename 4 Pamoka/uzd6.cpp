/*  6. Sudarykite programą, apskaičiuojančią sveikojo skaičiaus a laipsnį an,
    kai rodiklis n yra natūralusis skaičius                                 */
# include <iostream>
# include <iomanip>
# include <fstream>
# include <cmath>
using namespace std;
int main ()
{
    int a, aprad, n, i;

    cout << "Iveskite laipsnio pagrinda a: ";
    cin >> a;
    aprad = a;

    cout << "Iveskite laipsnio rodikli n: ";
    cin  >> n;

    for(i=2; i <= n; i++) {
        a = a * aprad;
    }
    cout << aprad << "^" << n << " yra " << a;
}
