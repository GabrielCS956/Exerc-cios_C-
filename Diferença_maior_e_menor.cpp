
#include "iostream" 

#include "math.h" 

#include "cstdlib" 

using namespace std; 

double num1, num2, dif; 

int main() 

{  

setlocale(LC_ALL, "Portuguese"); 

Repetir: // Ponto de repetição 

system("cls"); 

cout << "\nEntre com o primeiro numero:\n"; 

cin >> num1; 

cout << "\nEntre com o segundo numero:\n"; 

cin >> num2; 

if (num1 > num2) 

{ 

dif = num1 - num2; 

} 

else 

{ 

dif = num2 - num1; 

} 

 cout << "\nA diferença entre os numeros é: " << dif; 

 cout << endl;  

 system("pause"); 

 goto Repetir;  

return 0;  

} 

