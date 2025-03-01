#include <iostream>

using namespace std;

int main()
{
   float peso, altura, imc;


   cout << "informe seu peso: ";
   cin >> peso;

   cout << "Informe a sua altura: ";
   cin >> altura;

   // processamento do calculo

   imc = peso / (altura * altura);

   if (peso < 20)
   {
       cout << "Voçe esta abaixo do peso";

   }

   else if (imc >= 20 && imc < 25)
   {
       cout << "Voce esta no peso ideal";
   }
   else {
    cout << "Voce esta acima do peso";
   }

   return 0;
}
