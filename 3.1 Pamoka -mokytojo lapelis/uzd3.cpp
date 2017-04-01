/*
	Besilaikanti dietos moksleivė svarstyklėmis pasvėrė šešis
	pyragaičius. Tuos, kurie buvo lengvesni negu 50g, ji suvalgė.
*/
#include <iostream>
using namespace std;
int main ()
{
    int p1,p2,p3,p4,p5,p6,is_viso;
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
	// Papildomas tikrinimas "if..." ir "else if...", jei visų pyragėliu svoris virš 50, mažiau/lygu 50,
	// tuomet atsakymas bus kitoks.
	if (p1,p2,p3,p4,p5,p6 < 50) {
        cout << "Suvalgė visus šešis pyragėlius.";
	}
	else if (p1,p2,p3,p4,p5,p6 >= 50) {
	cout << "Nesuvalgė nė vieno pyragėlio.";
	}
	// Jei ne visų svoris <= 50 arba < 50, tada tikrinam po vieną.
	else {  
            cout << "Suvalgė ";
    		is_viso = 0;
    		if (p1 < 50) {
                is_viso++;
                cout << "pirmąjį";
    		}
    		if (p2 < 50) {
                is_viso++;
                cout << ", antrąjį";
    		}
    		if (p3 < 50) {
                is_viso++;
                cout << ", trečiąjį";
    		}
    		if (p4 < 50) {
                is_viso++;
                cout << ", ketvirtąjį";
            }
    		if (p5 < 50) {
                is_viso++;
                cout << ", penktąjį";
            }
            if (p6 < 50) {
                is_viso++;
                cout << ", šeštąjį";
    		}
            cout << " pyragėlius. Iš viso buvo suvalgyti " << is_viso << " pyragėliai.";
		}
}
