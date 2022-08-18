#include<iostream>
#include<math.h>
#define e 2.71828 
/* Define function here */
float f(int x){ 
    float y;
    double aux = -pow(x, 2)/2;
    y = pow(e, aux);
    return y;
}

using namespace std;
int main()
{
 float limiteI, limiteS, integration = 0.0, h, k;
 int i, subInterval;

 /* Input */
 cout<<"Enter limiteI limit of integration: ";
 cin>>limiteI;
 cout<<"Enter limiteS limit of integration: ";
 cin>>limiteS;
 cout<<"Enter number of sub intervals: ";
 cin>>subInterval;

 /* Calculation */

 /* Finding step size */
 h = (limiteS - limiteI)/subInterval;

 /* Finding Integration Value */
 integration = f(limiteI) + f(limiteS);

 for(i=1; i<= subInterval-1; i++)
 {
  k = limiteI + i*h;

  if(i%2==0)
  {
    integration = integration + 2 * (f(k));
  }
  else
  {
    integration = integration + 4 * (f(k));
  }

 }

 integration = integration * h/3;

 cout<< endl <<"Valor solicitado da integracao: "<< integration;

 return 0;
}
