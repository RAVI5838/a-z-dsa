#include <iostream>
using namespace std;

//void
//return
//parametrised
//non-parameterised

void printName(string name) {
   cout << " hello " << name << endl;
}

int main()
{   string name;
    cin >> name;
   printName(name);

   string name2;
    cin >> name2;
   printName(name2);

    return 0;
   
}