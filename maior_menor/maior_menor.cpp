#include <iostream> 

using namespace std;

int main (void){
    int a, b;
    
    cout << "Escreva os numeros que quer comparar: ";
    cin >> a >> b;

    if (a > b){
        cout << a << " é maior do que " << b << "\n";
    }
    
    else if (a < b){
        cout << a << " menor que " << b << "\n";

    }

    else{
        cout << a << " e igual a " << b << "\n";

    }
      return 0;
}