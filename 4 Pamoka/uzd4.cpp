///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 4 UŽDUOTIS:                                                                                                   //
// Elektros grandinę sudaro n lygiagrečiai sujungtų laidininkų, kurių varžos yra R1,Rr2.Rr3, ....,Rn omų.        //
// Parašykite programą, kuri apskaičiuotų grandinės varžą R.                                                     //
// ------------------------------------------------------------------------------------------------------------- //
// Lygiagrečiai sujungiamų laidininkų varžos apskaičiavimas:                                                     //
// n = 3, t.y kai laidininkų trys: R1, R2, R3, tai R = 1 / R1 + 1 / R2 + 1 / R3                                  //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <iomanip>
using namespace std;
main()

{
    setlocale(LC_CTYPE, "");
    double n, R=0, Rr, nn=1;

    cout << "Elektros grandinę sudaro lygiagrečiai prijungtų laidininkų: ";
    cin  >> n;

    for (n; n >= nn; nn++) {
        cout << nn << "-ojo laidininko varža, omais: ";
        cin  >> Rr;
        R = R + 1/Rr;
    }
    cout << "Elektros grandinės varža: " << fixed << setprecision(2) << R << " omų";

}

