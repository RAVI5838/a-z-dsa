#include<iostream>
using namespace std;

int main(){
  int x;
  cout << "enter age" << endl;
  cin >> x;
  if(x>18){
    cout << "adult" << endl;
  }
  else{
    cout << "not adult " << endl;
  }
   return 0;
}