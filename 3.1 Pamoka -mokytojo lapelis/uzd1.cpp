/*
Apskaičiuokyte y reikšmę: 
2x² - 2,   kai x >= 0;
x² + 5x³, kai x <  0.
*/
# include <iostream>
# include <cmath>
using namespace std;
int main ()
{
    setlocale(LC_ALL, "Lithuanian");
    int x, y;
    cout << "Įveskite X-a:";
    cin >> x;
    if (x >= 0) {
        y = 2 * pow(x,2) - 2;
    }
    if (x < 0) {
        y = pow(x,3) + 5 * pow(x,2);
    }
    cout << "Y reikšmė yra: " << y;
}
