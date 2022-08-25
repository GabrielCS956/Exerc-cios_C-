
#include "cstdlib" 

#include "math.h" 

#include "iomanip" 

#include "iostream" 

using namespace std; 

double valor ( ) 

{double val; 

cout << "\nDigite o valor "; 

cin >> val; 

return val;} 

double dias_atraso ( ) 

{double dia; 

cout << "\nQuantos dias de atraso?"; 

cin >> dia; 

return dia;} 

double taxa_multa ( double valor) 

{double multa; 

multa = (valor * 2) / 100;  

return multa;} 

double taxa_juros (double valor, double dias_atraso) 

{double juros; 

juros = valor * 0.01 * dias_atraso; 

return juros;} 

double vlpagar (double multa, double juros, double val ) 

{double vpag; 

vpag = multa + juros + val; 

return vpag;} 

void exibir (double vpag)  

cout<<"\nO valor a pagar será de:\n"<< vpag << endl;} 

int main(void) { 

setlocale(LC_ALL,"Portuguese"); 

double val, dia,juros, multa, vpag; 

int escolha; 

MENU: 

cout << "\nmenu\n1 Ler\n2 Calcular\n3 Exibir\n4 Sair \nitem:"; 

cin >> escolha; 

switch(escolha){ 

case 1: {val= valor(); 

dia=dias_atraso(); 

break;} 

case 2:{ multa = taxa_multa(val ); 

juros = taxa_juros (val, dia ); 

vpag = vlpagar (val,multa, juros ); 

break;} 

case 3:{ 

exibir (vpag); 

break;} 

case 4 : 

cout << "\nFim do programa!\n" << endl; 

exit(0); 

break;} 

system("pause"); 

goto MENU; 

return 0;} 
