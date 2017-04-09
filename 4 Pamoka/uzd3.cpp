// Klasėje mokosi n mokinių. Jų ūgiai atitinkamai yra u1, u2, u3 ... un centimetrų. Parašykite programą, kuri
// apskaičiuotų vidutinį klasės mokinių ūgį uvid.

#include <iostream>
/*#include <iomanip> */ // pridėti biblioteką, kuri apvalina skaičius ir kt.
using namespace std;
main()

{
    setlocale(LC_CTYPE, "");
    int n=1, uvid, sum=0, ugis, m;
    cout << "Kiek klasėje mokosi mokinių? Parašykite: ";
    cin >> m;
    for (m; m >= n; n++) {
        cout << "Koks " << n << "-ojo mokinio ūgis? ";
        cin  >> ugis;
        sum = sum + ugis;
    }
    uvid = sum / m;
    cout << "Visų mokinių vidurkis yra " /* << fixed << setprecision(2) */<< uvid; // nustatyti, kad rodytu 2 skaičius po kablelio

// ištrinti "/*" ir "*/", "int" pakeisti "double", jei nori, kad vidurkį išvestų suapvalintą iki šimtųjų.

}
