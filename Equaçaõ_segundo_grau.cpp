
#include "iostream" 

#include "math.h" 

#include "cstdlib" 

using namespace std; 

double A, B, C, D, R1, R2; 

int main()  

{  

setlocale(LC_ALL, "Portuguese"); 

Repetir: // Ponto de repetição 

system("cls"); 

cout << "\nEntre com o primeiro numero:\n"; 

cin >> A; 

cout << "\nEntre com o segundoo numero:\n"; 

cin >> B; 

cout << "\nEntre com o terceiro numero:\n"; 

cin >> C; 

D = pow (B,2) - 4 * A * C; 

if (D > 0) 

{ 

cout << "\nEssa equação não possui raizes"; 

} 

else 

{ 

if (D = 0) 

{ 

R1 = -B / (2 * A); 

cout << "\nA raiz é: \n" << R1; 

} 

else 

{ 

R1 = (-B - sqrt(D)) / (2 * A); 

R2 = (-B + sqrt (D)) / (2 * A); 

cout << "\nA primeira raiz é:\n" << R1; 

cout << "\nA segunda raiz é:\n" << R2; 

} 

} 

cout << endl;  

system("pause"); 

goto Repetir;  

return 0;  

} 
