
#include <iostream> 

#include <math.h> 

#include <cstdlib> 

#include <iomanip> 

using namespace std; 

int main()  

{  

setlocale(LC_ALL, "Portuguese"); 

int A, B, C, delta; 

float x1, x2;  

char opcao ; 

MENU:  

system("cls"); 

cout << "\nMenu\n1 Leitura, calculo e impressão\n2 Saida\nItem:"; 

cin >> opcao; 

switch ( opcao )  

{ 

case '1': cout << "\nDigite o valor de A:";  

cin >>A; 

cout << "\nDigite o valor de B:";  

cin >>B; 

cout << "\nDigite o valor de C";  

cin >>C; 

delta = B * B - 4 * A * C; 

cout << fixed << setprecision(2); 

if ( delta >= 1 ) 

{ 

x1 = - B - sqrt(delta) / (2 * A); 

x2 = - B + sqrt (delta) / (2 * A); 

cout<< "\n A :" << A; 

cout<< "\n B:" << B; 

cout<< "\n C:" << C; 

cout<< "\n delta:" << delta; 

cout<< "\n x1:" << x1; 

cout<< "\n x2:" << x2 << endl; 

} 

else  

{  

cout<< "\nSem soluição no conjunto dos números reais\n" << endl;  

cout<< "\n A :" << A; 

cout<< "\n B:" << B; 

cout<< "\n C:" << C; 

cout<< "\n delta:" << delta << endl; 

} 

break; 

case '2': cout << "\nSair do Programa!\n";  

exit(0); break;  

} 

system("pause");  

goto MENU;  

return 0;  

} 
