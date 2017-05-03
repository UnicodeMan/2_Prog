/*  5. Nurodyta pradinė oro stebėjimo temperatūra t0. Taip pat žinomas tolesnių stebėjimų skaičius n ir visi
    temperatūros pokyčiai tarp gretimų stebėjimų. Sukurkite programą, apskaičiuojančią paskutinio oro
    stebėjimo temperatūrą.                                                                                                  */

# include <iostream>
# include <iomanip>
# include <fstream>
# include <cmath>
using namespace std;
int main ()
{
    setlocale(LC_CTYPE,"");
    int t, n, i, tt;

    cout << "Kokia pradine templeratura? ";
    cin  >> tt;

    cout << "Koks stebejimu skaicius? ";
    cin  >> i; n=1;// paklausimas + n priskyrimas


    for(i; n <= i; n++){
        cout << n << "-ojo stebejimo temperatura: ";
        cin  >> t;
        tt = tt + t;
    }
    cout << "Paskutine temperatura " << tt;
}
