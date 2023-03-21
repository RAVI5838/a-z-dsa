#include <iostream>
using namespace std;

void doSomething(int num) { //pass by value 
  //if you attach & then pass by reference
   cout << num << endl;
   num +=5;
   cout << num << endl;
   num +=5;
   cout << num << endl;

}
//arrays always goes pass by reference
/*way to do is doSomething(arr, n); arr is array name and 'n'is the length*/
int main()
{ 
  int num =10;
  doSomething(num); //created copy
  cout << num << endl;//original value stayed same
}

