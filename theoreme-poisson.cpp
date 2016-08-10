#include <iostream> 
#include <cstdlib> 
#include <math.h>
#include <conio.h>
using namespace std ;
const float Num_e = 2.718281828459045235360 ;//number e
int main()
{
float media,ale,i;//declaration data

cout << " Introduce la media de exito: " ;//exit
cin >> media;//entry
cout << " Variable aleatoria de Poisson: " ;//exit
cin >> ale;//entry

float elevacion = pow(Num_e,-media);
float elevacion1 = pow(media,ale);

if(ale==0)
    ale++;
for(i=ale-1;i>0;i--)
    ale*=i;

cout << " La distribucion de Poisson es : "<<elevacion*elevacion1/ale<<endl;

system("pause"); //system("pause") 
return 0 ;
}
