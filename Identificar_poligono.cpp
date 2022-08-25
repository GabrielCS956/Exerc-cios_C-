
#include "iostream" 

#include "math.h" 

#include "cstdlib" 

#include "iomanip" 

using namespace std; 

double MedLado, area, p, a; 

int NumLados; 

int main () 

{ 

setlocale(LC_ALL, "Portuguese"); 

Inicio: 

system ("cls"); 

cout <<"\nQuantos lados tem o poligono?\n"; 

cin >> NumLados; 

if ( NumLados < 3) 

{ 

cout << "\nNão é um poligono\n"; 

system ("pause"); 

goto Inicio; 

} 

cout << "\nQual a medida dos lados do poligono?\n"; 

cin >> MedLado; 

if ( NumLados == 3) 

{ 

p = (3 * MedLado) / 2; 

area = sqrt (p * (pow (p - MedLado,3))); 

cout << "\nÉ um triângulo cuja area é de :" << area; 

} 

else if ( NumLados == 4) 

{ 

area = MedLado * 4; 

cout << "\nÉ um quadrado cuja area é de:" << area; 

} 

else if ( NumLados == 5) 

{ 

a = MedLado / 1,453; 

area = (5 * MedLado * a) / 2; 

cout << "\nÉ um pentagono cuja area é de:" << area; 

} 

else  

cout << "\nPoligono não identificado"; 

cout << endl;  

system("pause"); 

goto Inicio; 

return 0;  

} 
