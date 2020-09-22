#include <iostream>
using namespace std;

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