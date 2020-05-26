#include<iostream>
using namespace std;
 
int main(){
  int x;
  cin >> x;
  int h, m, s;
  h = x / 3600;
  m = (x - h*3600)/60;
  s = x - h*3600 - m*60;
  cout << h << ":" << m << ":" << s << endl;

  return 0;		 
}