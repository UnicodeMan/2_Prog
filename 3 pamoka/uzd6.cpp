#include <iostream>
using namespace std;
main()
{
setlocale(LC_CTYPE, "");
//Parašykite programą, kuri suskaičiuotų, kiek penkiaženkliame skaičiuje yra lyginių ir
//nelyginių skaičių. Raskite nelyginių skaičių sumą, lyginių sandaugą.
int sk,s1,s2,s3,s4,s5,lyg,nelyg,nsum,lsand;
    cout<< "Penkiaženklis skaičius: ";
    cin >> sk;

    s1 = sk / 10000;
    s2 = sk / 1000 % 10;
    s3 = sk / 100 % 10;
    s4 = sk / 10 % 10;
    s5 = sk % 10;

    lsand = 1; // lyginių sandauga = 1, kad galėtų dauginti tą skaičių ateitije, nes pagal nutylėjimą skaičius būna 0, o dauginant iš nulio gauname 0


    // 1 - asis skaičius, nustatome ar jis lyginis, ar nelyginis
    if (s1 % 2 == 0) {
        lyg++; // lyginių skaičių skaičius, + 1
        lsand = lsand * s1; // lyginių skaičių daugyba
    }
    else {
        nelyg++; // nelyginių skaičių skaičius, + 1
        nsum = nsum + s1; // nelyginių skaičių suma 
    }
    // 2 - asis skaičius, nustatome ar jis lyginis, ar nelyginis
    if (s2 % 2 == 0) {
        lyg++;
        lsand = lsand * s2;
    }
    else {
        nelyg++;
        nsum = nsum + s2;
    }
    // 3 - asis skaičius, nustatome ar jis lyginis, ar nelyginis
    if (s3 % 2 == 0) {
        lyg++;
        lsand = lsand * s3;
    }
    else {
        nelyg++;
        nsum = nsum + s3;
    }
    // 4 - asis skaičius, nustatome ar jis lyginis, ar nelyginis
    if (s4 % 2 == 0) {
        lyg++;
        lsand = lsand * s4;
    }
    else {
        nelyg++;
        nsum = nsum + s4;
    }
    // 5 - asis skaičius, nustatome ar jis lyginis, ar nelyginis
    if (s5 % 2 == 0) {
        lyg++;
        lsand = lsand * s5;
    }
    else {
        nelyg++;
        nsum = nsum + s5;
    }

    cout << "Lyginių   skaičių: " <<  lyg  << endl;
    cout << "Nelyginių skaičių: " << nelyg << endl;
    cout << "Lyginių  sandauga: " << lsand << endl;
    cout << "Nelyginių    suma: " <<  nsum << endl;



}

