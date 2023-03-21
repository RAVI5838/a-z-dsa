#include <iostream>
using namespace std;

int main()
{ int m;
  cout << "enter marks:";
  cin >> m;
  if(m < 25)
  { cout << "f" << endl;}
  else if(m < 45)
  { cout << "e" << endl;}
  else if(m < 50 )
  { cout << "d" << endl;}
  else if(m < 60)
  { cout << "c" << endl;}
  else if(m < 80)
  { cout << "b" << endl;}
  else if(m < 100)
  { cout << "a" << endl;}

  return 0;
}