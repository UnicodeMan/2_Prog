#include <iostream>
using namespace std;
main()
{
setlocale(LC_CTYPE, ""); // Lietuvinam
/*
  Petras išėjo iš namų, kai laikrodis rodė v1 valandų ir m1 minučių. Į gimnaziją Petro kelionė
  trunka m2 minučių. Parašykite programą, kuri ekrane parodytų pranešimą apie tai, ar
  Petras nepavėluos į pamoką, prasidedančią v valandų ir m minučių.
*/

int v1,m1,m2,v,m,mm1,mm;

cout << "Petras iš namų išėjo kai laikrodis rodė..." << endl << "Valandų? ";
cin  >> v1;
cout << "Minučių? ";
cin  >> m1;
cout << "Kiek minučių Petras truko nueiti iki gimnazijos? ";
cin  >> m2;
cout << "Pamokos gimnazijoje prasidėjo kai laikrodis rodė..." << endl << "Valandų? ";
cin  >> v;
cout << "Minučių? ";
cin  >> m;

// smulkinimas
mm  = v  * 60 + m;
mm1 = v1 * 60 + m1;

if (mm1 + m2 < mm) { // Išėjo iš namų + kiek trunka < kada prasideda
    cout << "Petras į pamoką nepavėluos.";
}
else {
    cout << "Petras į pamoką pavėluos.";
}
}

