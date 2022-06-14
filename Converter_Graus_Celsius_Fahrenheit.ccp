#include "iostream" 

#include "math.h" 

#include "cstdlib" 

using namespace std; 

int main () 

{ 

        system ("cls"); 

        setlocale (LC_ALL, "Portuguese"); 

        double C=0, F=0; 

        cout << "\nDigite o valor de Graus Celsius\n"; 

        cin >> C; 

        F = (9 * C + 160) / 5; 

        cout << "\nA conversão de graus Celsius para Fahrenheit é:" << F; 

        cout << "\n" << endl; 

system ("pause"); 

return 0; 

} 
