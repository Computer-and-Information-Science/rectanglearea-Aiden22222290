#include <iostream>
using namespace std;

int main() {
  const double length = 7.2;
  const double width = 1.3;

  double area;
  area = length*width;
  double perimiter;
  perimiter = (length*2) + (width*2);

  cout << "Rectangle Properties: " << endl;
  cout << "Length: " << length <<endl;
  cout << "Width: " << width <<endl;  
  cout << "Area: " << area <<endl;
  cout << "Perimiter: " << perimiter <<endl;
}