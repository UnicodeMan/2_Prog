#include <iostream>
using namespace std;
main()
{
setlocale(LC_CTYPE, "");
/*
  Ant popieriaus lapo užrašyti keturi natūralieji skaičiai: A, B, C, D. Po to du iš jų buvo
  nutrinti (juos žymėsime nuliais). Reikia atstatyti nutrintuosius skaičius, jeigu žinoma, kad
  yra likęs bent vienas iš skaičių A ir B ir kad skaičiai tenkino šitokias lygybes: C = A + B
  ir D = A*B. Parašykite programą šiam uždaviniui spręsti.
*/
    int A,B,C,D;


    cout << "A = ";
    cin  >> A;
    cout << "B = ";
    cin  >> B;
    cout << "C = ";
    cin  >> C;
    cout << "D = ";
    cin  >> D;
/*
 A = B - C
 A = D / B
 B = C - A
 B = D / A
 C = A + B
 D = A * B
*/

    if (A == 0 && C == 0) {
        A = D / B;
        C = A + B;
    }
    if (A == 0 && D == 0) {
        A = B - C;
        D = A * B;
    }
    if (B == 0 && C == 0) {
        B = D / A;
        C = A + B;
    }
    if (B == 0 && D == 0) {
        B = C - A;
        D = A * B;
    }
    cout << "--------" << endl;

    cout << "A = " << A << endl;
    cout << "B = " << B << endl;
    cout << "C = " << C << endl;
    cout << "D = " << D << endl;

}
