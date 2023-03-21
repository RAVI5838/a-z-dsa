#include <iostream>
using namespace std;

int main()
{ int age;
  cout << "enter age :";
  cin >> age;
  if(age < 18)
  { cout << "not eligible for job " << endl;}
   else if(age > 57)
  { cout << "retirement time" ;}
  else if(age >= 18)
  { cout << "eligible for job" ;
   if(age >= 55 && age <= 57)
  { cout << ",but retirement soon" << endl;}
    
  }
  return 0;
}