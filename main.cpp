#include <iostream>
using namespace std;
// Cand un corp cade, viteza sa creste continuu. Distanta dintre o caramida si punctul de unde a fost lasata sa cada este data de relatia: d = g*t*t/2.
//unde t este numarul de secunde trecut de cand a fost lasata sa cada si g este acceleratia gravitationala (9.81 m/s*s). Scrieti un program care afiseaza intr-un tabel timpul t si distanta parcursa. Afisarea se va intrerupe cand distanta parcursa este > 500m.
//!! Atentie la scrierea formulei supra 2 (adica /2) pentru ca de ex, 1/2 este 0. Deci trebuie scris (formula)/2PUNCT.
int main() {
  float d;
  float g;
  float t;
  d = 0;
  g = 9.81;
  t = 0;

  while(d <= 500){
    cout << t << " " << d << endl;
    t++; //sau t = t + 1;
    d = (g * t * t) / 2.; 
  }
  cout << "Distanta trebuie sa fie mai mica decat 500.";
  return 0;

}