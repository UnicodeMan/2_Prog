# include <iostream>
# include <cmath>
using namespace std;
main()
{
setlocale(LC_CTYPE, "");
/*
  Žinomi kvadratinės lygties ax2 + bx + c = 0
  koeficientai a, b ir c. Parašykite programą,
  kuri išspręstų šią lygtį.
*/
    double a, b, c, x1, x2, D;

    cin >> a >> b >> c;

    D = pow(b, 2) - 4 * a * c;
    if (D < 0) {
        cout << "Lygtis nesigaus.";
    }
    else {
    x1 = ( b - 2 * b + sqrt(D) ) / 2 * a;
    x2 = ( b - 2 * b - sqrt(D) ) / 2 * a;

    cout << "1-asis x: " << x1 << ", 2-asis x: " << x2;
    }


//cout << "Hello World!ę";
//return 0;

}
