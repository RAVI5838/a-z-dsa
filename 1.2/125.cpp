#include<iostream>
using namespace std;

void print1(int n){
   for(int i=n; i>=1; i--){

         for(int j=1; j<=i; j++){

             cout<<"* ";

         }

         cout<<endl;

     }

}

void print2(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 0; j <n-i+1; j++)
    {
      cout << j+1 <<" ";
    } cout << endl;
    
  }
  
}
int main() {
  int  t;
  cin >> t;
  for(int i=0;i<t;i++) {
    int n;
    cin >> n;
  //print1(n);
  print2(n);}
  return 0;
}
