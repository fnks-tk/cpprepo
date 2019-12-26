/* hatten3.cpp */
#include <iostream>
using namespace std;

void exchange(int &x, int &y){
  int cp;
  cp = x;
  x = y;
  y = cp;
}

int main(){
  int x = 10;
  int y = 15;
  cout << "x : y\n";
  cout << x << " : " << y << "\n";
  exchange(x, y);
  cout << x << " : " << y << "\n";
}
