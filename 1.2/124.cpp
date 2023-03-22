#include<iostream>
using namespace std;
//outer loop is for lines
/*inner loop is no of coloumns
focus on columns and connect them to row
print insider loop
observe symmetry*/
void print1(int n){
  for(int i=1;i<=n;i++) {
    for(int j=1;j<=i;j++)  {
      cout << i <<" ";
    } cout << endl;
  }

}

int main() {
  int  t;
  cin >> t;
  for(int i=0;i<t;i++) {
    int n;
    cin >> n;
  print1(n);}
  return 0;
}
