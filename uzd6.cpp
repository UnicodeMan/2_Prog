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

    lsand = 1;


    // determine 1
    if (s1 % 2 == 0) {
        lyg++;
        lsand = lsand * s1;
    }
    else {
        nelyg++;
        nsum = nsum + s1;
    }
    // determine 2
    if (s2 % 2 == 0) {
        lyg++;
        lsand = lsand * s2;
    }
    else {
        nelyg++;
        nsum = nsum + s2;
    }
    // determine 3
    if (s3 % 2 == 0) {
        lyg++;
        lsand = lsand * s3;
    }
    else {
        nelyg++;
        nsum = nsum + s3;
    }
    // determine 4
    if (s4 % 2 == 0) {
        lyg++;
        lsand = lsand * s4;
    }
    else {
        nelyg++;
        nsum = nsum + s4;
    }
    // determine 5
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

//cout << "Hello World!ę";
//return 0;

}

