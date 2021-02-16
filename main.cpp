#include <iostream>
#include <iomanip>
using namespace std;

int main() {
double radius;
double volume;
double pi;

pi = 3.14159265359;


cout << setprecision (2) << fixed;

  cout << "Input the radius:\n"; 
  cin  >> radius;

  volume = (4.0/3.0 * pi * radius * radius * radius); 
  cout << "The volume of the sphere is:\n" << volume << endl;








}