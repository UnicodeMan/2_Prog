#include <iostream>
using namespace std;
int main()

{
setlocale(LC_CTYPE, "");
//Žinomi dviejų klasių matmenys (metrais) – ilgis ir plotis. Nustatykite ir išveskite, keliais
//kvadratiniais metrais ir kurios klasės plotas didesnis (visi klasių matmenys yra skirtingi).
int i1, i2, pi1, pi2, pa1, pa2, skirt;
cout << "Įveskite duomenis."<<endl;
cout << "-------------------------------"<<endl;
cout << "     --  Pirma klasė     --    "<<endl;
cout << "Ilgis: ";
cin  >> i1;
cout << "Plotis: ";
cin  >> pi1;
pa1 = i1 * pi1;
cout << "  --    Plotas: " << pa1 << "kv. m.  --  "<<endl;

//cout << "Įveskite duomenis."<<endl;
cout << "-------------------------------"<<endl;
cout << "     --  Antra klasė     --    "<<endl;
cout << "Ilgis: ";
cin  >> i2;
cout << "Plotis: ";
cin  >> pi2;
pa2 = i2 * pi2;
cout << "  --    Plotas: " << pa2 << "kv. m.  --  "<<endl;
cout << "-------------------------------"<<endl;
if (pa1 < pa2) {
    skirt = pa2 - pa1;
    cout << "Antra klasė yra didesnė " << skirt << " kv. metrais.";
}
else {
    skirt = pa1 - pa2;
    cout << "Pirma klasė yra didesnė " << skirt << " kv. metrais.";

 }
}
