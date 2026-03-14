#include <iostream>
using namespace std;
int main(){
    int base = 2; 
    longlong res = 1;
    char r = "y";
    
    while(r == 'y' || r == 'Y'){

    res *= base;

    cout << res <<
    cin >> r;
  
}    
    return 0
}