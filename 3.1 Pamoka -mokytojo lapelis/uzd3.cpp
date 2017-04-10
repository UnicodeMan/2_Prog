/*
	Besilaikanti dietos moksleivė svarstyklėmis pasvėrė šešis
	pyragaičius. Tuos, kurie buvo lengvesni negu 50g, ji suvalgė. svorį
*/
#include <iostream>
using namespace std;
int main ()
{
    int p1,p2,p3,p4,p5,p6,svor=0;
    //svor = 0;
	cout << "1 - ojo pasverto pyragėlio svoris, gramais: ";
	cin >> p1;
	cout << "2 - ojo pasverto pyragėlio svoris, gramais: ";
	cin >> p2;
	cout << "3 - ojo pasverto pyragėlio svoris, gramais: ";
	cin >> p3;
	cout << "4 - ojo pasverto pyragėlio svoris, gramais: ";
	cin >> p4;
	cout << "5 - ojo pasverto pyragėlio svoris, gramais: ";
	cin >> p5;
	cout << "6 - ojo pasverto pyragėlio svoris, gramais: ";
	cin >> p6;

    svor = 0;
    if (p1 < 50) {
        svor = svor + p1;
    }
    if (p2 < 50) {
        svor = svor + p2;
    }
    if (p3 < 50) {
        svor = svor + p3;
    }
    if (p4 < 50) {
        svor = svor + p4;
    }
    if (p5 < 50) {
        svor = svor + p5;
    }
    if (p6 < 50) {
        svor = svor + p6;
    }
    cout << "Suvalgytu pyrageliu svoris: " << svor << "g.";
}
