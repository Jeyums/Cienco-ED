#include <iostream>

using namespace std;

int main()
{
    float horatrab, salmin, salbruto, numehoras,
    float imposto, salreceber;

    cout << "digite o numero de horas trabalhadas: " << endl
    cin >> numehoras

    cout << "digite o valor do salario minimo: " endl
    cin >> salmin;

    horatrab = salmin / 2;
    salbruto = numehoras * horatrab;
    impostos = salbruto * 3/100;
    salreceber = salbruto - imposto


    cout << "Salario bruto: " << salbruto << endl;
    cout << "Salario a receber: " << salreceber << endl;



}

 return 0;
